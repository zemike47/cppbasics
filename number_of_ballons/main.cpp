/* fundammental of programming and computing with C++ practice exericse
 Group name = THE IT CROWD
 */
#include <iostream>
#include <cmath>
#include <ctype.h>

using namespace std;

int main()
{
   /* Q2. write a program that prompts the capacity in gallons of an automobile fule
   and the miles per gallons the automobiles can be driven. the program outputs the number miles
   per the automobile can be driven without refueling. */
    float MPG , G , MI;

    cout<<"2) write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons the automobilies can be driven. the program outputs the number miles the automobile can be driven.\n"<<endl;
    cout<<"PLEASE ENTER THE CAPACITY OF FULE TANK OF AN AUTOMOBILE IN GALLONS"<<endl;
    cin>>G;
    cout<<"PLEASE ENTER THE MILES PER GALLONS THE AUTOMONILES CAN BE DRIVEN"<<endl;
    cin>>MPG;
    MI=MPG*G;
    cout<<"THE NUMBER OF MILES THE AUTOMOBILE CAN BE DRIVEN IS: "<<MI<<"MPG \n"<<endl;
    /* 3). write a program that converts a letter entered from the keyboard to its uppercase
    or lower case equivalent (hint:- use the function defined in ctype.h library header file) */
    cout<<"3) write a program that converts a letter entered from the keyboard to its uppercase or lower case equivalent (hint:- use the function defined in ctype.h library header file) \n "<<endl;
    char l , c;
    cout<<"enter character: ";
    cin>>l;
    c=(l>='A' && l<='Z')? isupper(l):islower(l);
    cout<<c<<endl;


    /* 4) write a proram that finds the result of the expression of x^y
    where the values for x and y are entered by the user*/
    cout<<" 4) write a proram that finds the result of the expression of x^y where the values for x and y are entered by the user \n"<<endl;
    int x ,y ;
    cout<<"enter the value of x:"<<endl;
    cin>>x;
    cout<<"enter the value of y:"<<endl;
    cin>>y;
    int result = pow(x,y);
    cout<<"the result of x^y is: \n"<<result<<endl;
    //
    float filesize;
    float characterspersecond = 960;
    float time;
    cout<<"enter the file size(in characters) :"<<endl;
    cin>>filesize;
     time = filesize/characterspersecond;
    cout<<"it will take: " << time<<": seconds to send the file."<<endl;
    return 0;

}
