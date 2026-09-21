#include <iostream>
using namespace std;

signed main()
{
    int sizeChar;
    cin >> sizeChar;
    char arr1[sizeChar];

    for (int i = 0; i < sizeChar; i++)
    {
        cin >> arr1[i];
    }

    int compressedLength = 1;
    char last = arr1[0];
    for (int i = 1; i < sizeChar; i++)
    {
        if (last != arr1[i])
            compressedLength++;
        last = arr1[i];
    }
    int q;
    char z = arr1[sizeChar - 1];
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        char c;
        cin >> c;
        if (last != c)
            compressedLength++;
            last = c;
                cout << compressedLength<<endl;

    }
}