#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3; int a,b,c; int n;

    cin >> n;
    for(int i =0; i < n; i++)
    {
        cin >> x1 >>y1>>x2>>y2>>x3>>y3;
    a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    
    if(a == b and c == b and a == c and (y2 - y1)*(x3 - x1) != (y3 - y1)*(x2 - x1)) cout << "Yes" << endl;
        else cout << "No"<<endl;
     a=0;b=0;c=0;
    }
    

}
