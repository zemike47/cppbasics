#include <iostream>
using namespace std;
int main()
{

int D ,M,Y;
   char ch;
   month: cout<<"enter the month: ";
cin>>M;
if(M<1 ||M>12)
{cout<<"wrong input"<<endl;
cout<<"please enter from 1-12"<<endl;
while(M<1 ||M>12)goto month;}
else if (M==2)
    {cout<<"do you want to calculate in common condition or Leep condition? enter C for common condition and any another letter for leep condition."<<endl;
     cin>>ch;
     if (ch=='c'||ch=='C')
     {
Day:cout<<"enter the day: ";
cin>>D;
if(D<=0 || D>28)
     {cout<<"wrong input"<<endl;
    cout<<"please enter from 1- 28"<<endl;
    while(D<=0 || D>28) goto Day;}
    cout<<"enter the year: ";
cin>>Y;
cout<<"you enter: "<<D<<"/"<<M<<"/"<<Y<<endl;
if(D==28)
cout<<"the next day is: "<<"01"<<"/"<<M+1<<"/"<<Y<<endl;
else
    cout<<"the next day is: "<<D+1<<"/"<<M<<"/"<<Y<<endl;
}
else
D:cout<<"enter the day: ";
cin>>D;
if(D<=0 || D>29)
     {cout<<"wrong input"<<endl;
    cout<<"please enter from 1- 29"<<endl;
    while(D<=0 || D>29) goto D;}
    cout<<"enter the year: ";
cin>>Y;
cout<<"you enter day: "<<D<<"/"<<M<<"/"<<Y<<endl;
if(D==29)
cout<<"the next day is: "<<"01"<<"/"<<M+1<<"/"<<Y<<endl;
else
    cout<<"the next day is: "<<D+1<<"/"<<M<<"/"<<Y<<endl;}
 else if (M==4 || M==6 ||M==9 ||M==11)

 {
     DAY:cout<<"enter the day: ";
cin>>D;
if(D<=0 || D>30)
     {cout<<"wrong input"<<endl;
    cout<<"please enter from 1- 30"<<endl;
    while(D<=0 || D>30) goto DAY;}
    cout<<"enter the year: ";
cin>>Y;
cout<<"you enter  day: "<<D<<"/"<<M<<"/"<<Y<<endl;
if(D==30)
cout<<"the next day is: "<<"01"<<"/"<<M+1<<"/"<<Y<<endl;
else
    cout<<"the next day is: "<<D+1<<"/"<<M<<"/"<<Y<<endl;
 }
    else if (M==1 || M==3 ||M==5 ||M==7||M==8 ||M==10)
  {
     day:cout<<"enter the day: ";
cin>>D;
if(D<=0 || D>31)
     {cout<<"wrong input"<<endl;
    cout<<"please enter from 1- 31"<<endl;
    while(D<=0 || D>31) goto day;}
    cout<<"enter the year: ";
cin>>Y;
cout<<"you enter  day: "<<D<<"/"<<M<<"/"<<Y<<endl;
if(D==31)
cout<<"the next day is: "<<"01"<<"/"<<M+1<<"/"<<Y<<endl;
else
    cout<<"the next day is: "<<D+1<<"/"<<M<<"/"<<Y<<endl;
  }
  else if(M==12)
  {
         daY:cout<<"enter the day: ";
cin>>D;
if(D<=0 || D>31)
     {cout<<"wrong input"<<endl;
    cout<<"please enter from 1- 31"<<endl;
    while(D<=0 || D>31) goto daY;}
    cout<<"enter the year: ";
cin>>Y;
cout<<"you enter  day: "<<D<<"/"<<M<<"/"<<Y<<endl;
if(D==31)
cout<<"the next day is: "<<"01"<<"/"<<"01"<<"/"<<Y+1<<endl;
else
    cout<<"the next day is: "<<D+1<<"/"<<M<<"/"<<Y<<endl;
  }
  else
 {cout<<"you enter invalid number"<<endl;
  cout<<"please enter from 1-12"<<endl;}
  while(M<1 || M>12) goto month;


return 0;
    }
