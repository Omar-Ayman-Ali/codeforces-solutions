#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>

class Sales_item {
    // Friend functions to allow operator overloading to access private data
    friend std::istream& operator>>(std::istream&, Sales_item&);
    friend std::ostream& operator<<(std::ostream&, const Sales_item&);
    friend bool operator==(const Sales_item&, const Sales_item&);

public:
    // Constructors
    Sales_item() = default;
    Sales_item(std::istream& is) { is >> *this; }

    // Member operations
    Sales_item& operator+=(const Sales_item&);
    std::string isbn() const { return bookNo; }
    double avg_price() const;

private:
    std::string bookNo;      // International Standard Book Number (ISBN)
    unsigned units_sold = 0; // Number of copies sold
    double revenue = 0.0;    // Total revenue generated
};

// Non-member binary operator+
inline Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs) {
    Sales_item ret(lhs);
    ret += rhs;
    return ret;
}

inline std::istream& operator>>(std::istream& in, Sales_item& item) {
    double price;
    in >> item.bookNo >> item.units_sold >> price;
    if (in) {
        item.revenue = item.units_sold * price;
    } else {
        item = Sales_item(); // Reset to default state if input fails
    }
    return in;
}

inline std::ostream& operator<<(std::ostream& out, const Sales_item& item) {
    out << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();
    return out;
}

inline Sales_item& Sales_item::operator+=(const Sales_item& rhs) {
    bookNo = rhs.bookNo; // Assumes both items have the same ISBN
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

inline bool operator==(const Sales_item& lhs, const Sales_item& rhs) {
    return lhs.units_sold == rhs.units_sold &&
           lhs.revenue == rhs.revenue &&
           lhs.isbn() == rhs.isbn();
}

inline double Sales_item::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

#endif