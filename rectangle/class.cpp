// classes example
#include <iostream>
#include <list>

using namespace std;
class Rectangle1
{
    // private by default
    int width, height;

public:
    list<string> nameRectangle = {"R1" , "R2" , "R3 ","R4 "};
    Rectangle1 (int x, int y)
    {
        width = x;
        height = y;
    }
    int area()
    {
        return width * height;
    }

};
struct Rectangle2
{
    // public by default
    int width, height;
    int area()
    {
        return width * height;
    }
};
int main()
{
   Rectangle1 rect1 = Rectangle1(9,9);
   cout << "area 1 = "<< rect1.area();
   Rectangle2 rect2 = {8,8};
   cout << "area 2 = "<< rect2.area();

 for(string rectType : rect1.nameRectangle){
    cout <<"\n" << rectType ;
 }
    return 0;
}