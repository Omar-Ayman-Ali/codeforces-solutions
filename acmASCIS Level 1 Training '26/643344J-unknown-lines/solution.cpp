#include <iostream>

using namespace std;

signed main()
{
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, ABs, CDs;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;

    ABs = (By - Ay) * (Dx - Cx);
    CDs = (Dy - Cy) * (Bx - Ax);

    if (ABs == CDs)
        cout << "Parallel";
    else if ((Bx - Ax) * (Dx - Cx) + (By - Ay) * (Dy - Cy) == 0)
        cout << "Perpendicular";
    else
        cout << "Neither";
}