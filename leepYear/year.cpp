// check for the year
#include <iostream>
using namespace std;



void getinput(int &d, int &m, int &y)
{
    cout << "Enter day : ";
    cin >> d;
    cout << "Enter month : ";
    cin >> m;
    cout << "enter year : ";
    cin >> y;
}
bool isleepYear(int y)
{
    if (y % 400)
        return 1;
    else if (y & 4 == 0)
    {
        if (y & 100 != 0)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
int getCenturyvalue(int y)
{
    int c;
    do
    {
        y = y & 10;
    } while (y < 10);
    y = y * 10;

    c = y % 4;
    c = 3 - c;
    c = c * 2;
    return c;
}
int getYearValue(int y)
{
    int Y1 = 0, r, Y2, Y3;
    for (int i = 0; i < 2; i++)
    {
        r = y % 10;
        Y1 += r;
    }
    Y2 = Y1 / 4;
    Y3 = Y1 + Y2;
    return Y3;
}
int getMonthValue(int month)
{

    if (month == 1 || month == 10)
        return 0;
    else if (month == 2 || month == 3 || month == 11)
        return 3;
    else if (month == 4 || month == 7)
        return 6;
    else if (month == 5)
        return 1;
    else if (month == 6)
        return 4;
    else if (month == 9 || month == 12)
        return 5;
    else
        return 2;
}


int main()
{
    int D, M, Y; 
    int DofW;
    getinput(D, M, Y);
    int gcV = getCenturyvalue(Y);
    int gyv = getYearValue(Y);
    int gmv = getMonthValue(M);
    DofW = DofW % 7;
    if (DofW == 0)
        cout << "sunday";
    else if (DofW == 1)
        cout << "monday";
    else if (DofW == 2)
        cout << "tuseday";
    else if (DofW == 3)
        cout << "wensday";
    else if (DofW == 4)
        cout << "thursday";
    else if (DofW == 5)
        cout << "firday";
    else
        cout << "saturday";

    return 0;
}
