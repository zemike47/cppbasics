//program to displays Pythagorean triples for side 1, side 2 and the hypotenuse, all no larger than 100.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //Declaration
    int side1=1, side2=1, Hypotenuse=1;
    int side1_square,side2_square,Hypotenuse_square;
    int main_choice;
    char choice;
 line11 : system("CLS");
      system("color F0");
//welcoming and asking  a user for a choice to program
        cout<<"================================================"<<endl;
        cout<<" WELCOME TO OUR PROGRAM                         "<<endl;
        cout<<"________________________________________________\n"<<endl;
        cout<<" 1) brute-force computing "<<endl;
        cout<<" 2) to display sides of right triangle geometrically "<<endl;
        cout<<" 3) exit \n"<<endl;
 Choice_again: cout<<"enter your choice : ";
 cin>>main_choice;
 if(main_choice==1)
 {
     	system("CLS");
     	system("color 06");
     //to display right triangle geometricaly
cout<<"right triangle :-"<<endl;
 cout<<"\t";    cout<< " |\\ "<<endl;
cout<<"\t";      cout<<" | \\ "<<endl;
cout<<"\t";      cout<<" |  \\ "<<endl;
cout<<"side-1";cout<<"   |   \\ "<<" Hypotenuse"<<endl;
cout<<"\t";      cout<<" |_   \\ "<<endl;
cout<<"\t";      cout<<" |_|___\\ "<<endl;
cout<<"\t" ;    cout<<" side-2"<<endl;
// to do brute-force computing and display a table of Pythagorean triples
cout<<"\n the following table displays Pythagorean triples for side 1, side 2 and the hypotenuse, all no larger than 100\n"<<endl;
    cout<<"\t\t_________________________________________________"<<endl;
    cout <<"\t\t|  side-1       |"<<"  side-2       |"<<" Hypotenuse    |"<<endl;

    cout<<"\t\t|_______________|_______________|_______________|"<<endl;
    //loop through all possible values of side1
    for (side1=1; side1<100; side1++)
    {
        //loop through all possible values of side2
        for (side2=1;side2<100;side2++ )
        {
            //loop through all possible values of side3
            for (Hypotenuse=1; Hypotenuse<100; Hypotenuse++)
            {
                side1_square=side1*side1;
                side2_square=side2*side2;
                Hypotenuse_square=Hypotenuse*Hypotenuse;
                if (Hypotenuse_square==side1_square+side2_square)
                    {
    //code to print the output in table form.

    cout<<"\t\t";                 cout<<"| "<< side1<<"\t\t|"<<side2<<"\t\t|"<< Hypotenuse<<"\t\t|"<<endl;
       cout<<"\t\t|_______________|_______________|_______________|"<<endl;



                 }

                }

            }
        }

    cout<<"\nDO YOU WANT TO BCAK TO MANI CHOICE (y/n)"<<endl;
    cin>>choice;
    if(choice=='y'||choice=='Y')
{
    goto line11;
}
else
{
        return 0;
}
 }
 //code to print Pythagorean triples for side 1, side 2 and the hypotenuse, all no larger than 100 in geometric form.
 else if(main_choice==2)

 {
    system("CLS");
     	system("color 04");
  input:  cout<<" \n*******************************************************************"<<endl;
  //ask the user to input the value for side 1 and side 2
  side1 :   cout<<"enter a value for side 1 :  ";
    cin>>side1;
    if(side1<=0 || side1>=100)
    {
        cout<<"please enter a number only from 1 - 100 "<<endl;
    goto side1;
    }
side2:    cout<<"enter a value for side 2 : ";
     cin>>side2;
      if(side2<=0 || side2>=100)
      {
      cout<<"please enter a number only from 1 - 100 "<<endl;
    goto side2;

      }
      //code to compute hypotenuse
     double Hypsqr = pow(side1, 2) + pow(side2, 2);
      double sqrtHyp = sqrt(Hypsqr);
      //to display rigth triangle in geometric form.
if(sqrtHyp<100)
{
    if(sqrtHyp==floor(sqrtHyp))
    {
        if(side1<=9)
        {
                       cout<<side1<<"^2 +"<<side2<<"^2 ="<<sqrtHyp<<endl<<endl;
                       cout<<"\t"; cout<< " |\\ "<<endl;
                       cout<<"\t";      cout<<" | \\ "<<endl;
                       cout<<"\t";      cout<<" |  \\ "<<endl;
                       cout<<"  "<<side1<<"      |   \\ "<<sqrtHyp<<endl;
                       cout<<"\t";      cout<<" |    \\ "<<endl;
                       cout<<"\t";      cout<<" |_____\\ "<<endl;
                       cout<<"\t     " ;    cout<<side2<<endl;
                       cout<<"DO YOU WANT TO INPUTE OTHER NUMBERS (y/n) "<<endl;
                                 cin>>choice;
                            if(choice=='y'|| choice=='Y' )
                                  {
                                      goto input;
                                  }
                                else
                                     {
                                         cout<<"DO YOU WANT TO BACK TO MAIN choice (y/n)"<<endl;
                                          cin>>choice;
                                          if(choice=='y'||choice=='Y')
                                                goto line11;
                                         else
                                               return 0;
}
        }
        else
        {
cout<<side1<<"^2 +"<<side2<<"^2 ="<<sqrtHyp<<endl<<endl;
cout<<"\t"; cout<< " |\\ "<<endl;
cout<<"\t";      cout<<" | \\ "<<endl;
cout<<"\t";      cout<<" |  \\ "<<endl;
cout<<"  "<<side1<<"     |   \\ "<<sqrtHyp<<endl;
cout<<"\t";      cout<<" |    \\ "<<endl;
cout<<"\t";      cout<<" |_____\\ "<<endl;
cout<<"\t     " ;    cout<<side2<<endl;
cout<<"DO YOU WANT TO INPUTE OTHER NUMBERS (y/n) "<<endl;
cin>>choice;
if(choice=='y'|| choice=='Y' )
{
    goto input;
}
else
{
cout<<"DO YOU WANT TO BACK TO MAIN choice (y/n)"<<endl;
    cin>>choice;
if(choice=='y'||choice=='Y')
 {
    goto line11;
}
else
        return 0;
}
        }
    }
    else
    {
cout<<"the value is larger than 100 or isn't pythagorian triple"<<endl;
cout<<"\n ____________________________________________"<<endl;
cout<<"DO YOU WANT TO INPUTE OTHER NUMBERS (y/n) "<<endl;
cin>>choice;
if(choice=='y'|| choice=='Y' )
{
    goto input;
}
else
{
cout<<"DO YOU WANT TO BACK TO MAIN choice (y/n)"<<endl;
    cin>>choice;
if(choice=='y'||choice=='Y')
    goto line11;
else
        return 0;
}
}
}
else
{
cout<<"the value is larger than 100 or isn't Pythagorean triples"<<endl;
cout<<"\n ____________________________________________"<<endl;
cout<<"DO YOU WANT TO INPUTE OTHER NUMBERS (y/n) "<<endl;
cin>>choice;
if(choice=='y'|| choice=='Y' )
{
   goto input;
}
else
{
cout<<"DO YOU WANT TO BACK TO MAIN choice (y/n)"<<endl;
    cin>>choice;
if(choice=='y'||choice=='Y')
{
    goto line11;
}
else
        return 0;
}
}
 }
else if(main_choice==3)
{
    cout<<"YOU EXIT THE PROGRAM"<<endl;
    return 0;
}
else
cout<<"invalid input"<<endl;
goto Choice_again;


return 0;
}
