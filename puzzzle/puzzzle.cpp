#include <iostream>
using namespace std;
int main()
{
 /*54. Holy digits Batman! The riddler is planning his next caper somewhere on Addis Ababa
Avenue. In his usual sporting fashion, he has left the address in the form of a puzzle. The
address on Addis Ababa Avenue is a four-digit number where:
• All four digits are different
• The digit in the thousands place is three times the digit in the tens place
• The number is odd
• The sum of the digits is 27
Write a program that uses a loop (or loops)to find the address where the riddle plans
to strike. */
int k,sum=0;
 for(int i=3;i<10;i=i+3)
 {
  k=i/3;
   for(int j=0;j<10;j++)
   {
       if(j!=i&&j!=k)
        for(int l=1;l<10;l=l+2)
            if(l!=i&&l!=j&&l!=k)
        {
            sum=i+j+k+l;
            if(sum==27)
            {
        cout<<i<<j<<k<<l<<endl;break;
            }
       }
   }
}




    return 0;
}
