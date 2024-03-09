#include <iostream>
using namespace std;

struct complex
{
    float real;
    float imaginery;
};
complex add( complex c1 , complex c2 ){
   complex result;
   result.real = c1.real + c2.real;
   result.imaginery = c1.imaginery + c2.imaginery;
   return result;
}
complex sub(complex c1 ,complex c2){
    complex result;
    result.real = c1.real - c2.real;
    result.imaginery = c1.imaginery - c2.imaginery;
    return result;
}
complex multiply(complex c1 , complex c2){
    complex result;
    result.real = c1.real * c2.real - c1.imaginery * c2.imaginery;
    result.imaginery = c1.real * c2.imaginery + c2.real * c1.imaginery;
    return result;
}
complex divied(complex c1 ,complex c2){
    float denominator;
    denominator = c1.real * c2.real + c1.imaginery * c2.imaginery; 
    complex result;
    result.real = (c1.real * c2 .real + c1.imaginery * c2.imaginery ) / denominator;
    result.imaginery =( - (c1.real * c2.imaginery )+ c1.imaginery * c2.real) / denominator;

    return result;
}
 
int main()
{
  complex c1 , c2 ,c3 ,c4 ,c5 ,c6;
  cout<<"enter first complex number: ";
  cin>>c1.real>>c1.imaginery;
  cout<<"enter second complex number : ";
  cin>>c2.real>>c2.imaginery;
   
  cout<<"\nc1 = "<<c1.real << " + "<<c1.imaginery<<" i"<<endl;
  cout<<"c2 = "<<c2.real << " + "<<c2.imaginery<<" i"<<endl;

  c3 = add (c1 , c2);
  cout << " c1  + c2  = "<< c3.real << " + "<<c3.imaginery << " i"<<endl;
  c4 = sub(c1 , c2);
  cout << " c1  - c2  = "<< c4.real << " + "<<c4.imaginery << " i"<<endl;
  c5 = multiply(c1 , c2);
  cout << "c1 * c2  = "<< c5.real << " + "<< c5.imaginery << " i"<<endl;
  c6 = divied (c1 ,c2);
  cout <<"c1 / c2 = " << c6.real << " + " << c6.imaginery << " i"<<endl;



    return 0;
}