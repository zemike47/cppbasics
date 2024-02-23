/*Exercise 1
1.A calculate BMI for n number of people and give description for both male and female.
1.B Write a program that tells whether a character entered from the keyboard is in upper case or
in lower case or digit or special character.update the program to check if the number is
even/odd and also the alphabet is vowel or consonant.

Exercise 2

write a c++ program to calculate a NET-pay of an employee as follow after deduction
of pension(7%)and tax.the program should read the gross salary, worked hours and
income tax rate.if the employee worked hours exceed 40 hrs,the program prompts
the user to enter an over-time bonus rate/hour and find the bonus payment by multiplying
the extra hours worked with the provided bonus rate.
net Salary=(gross Salary -pension -income tax)+Overtime payment
let's update the program so that program must calculate taxes according to the the following rates.
 Your program must calculate taxes according to the following rates:
Up to 200Br 0%
200Br – 600Br 10%
600Br – 1200Br 15%
1200Br – 2000Br 20%
2000Br – 3500Br 25%
3500Br & above 30%

Exercise 3
 Write a program that converts a mark of a course entered from the keyboard to its
corresponding letter-grade based on the following scales.

Mark        >=90 >=80 >=75 >=60 >=55 >=45 >=30 < 30
Mark Grade    A+   A    B+   B    C+   C     D    F
let's update the program so that program read the various assessments and compute the total mark;
test 15%
Quiz 5%
project 20%
Assignment 10%
final exam 50%

Exercise 4
playing with number'
Write a program that accepts an integer from the user and
a. Prints the reverses the number (E.g. input = 4637215 Output=5217364)
b. Counts the number of digits in an integer number (E.g. 23,498 has five digits)
c. find the sum of the digits of the given number (e.g input = 4823 sum =17)
d. find the product of even digits of the given number(e.g input=4923 prod =8)
e. prints the first and the last digit of the number and finds their sum
f. Swaps the first and the last digits of a number
g. Check whether a number is palindrome or not.
h. Find frequency of each digit in a given integer and print in table format
i. check a number is Armstrong or not.
j. check if the number is strong or not
k. check whether a number  is perfect number or not.

Exercise 5:printing patterns
5.a) write a an application to print out the numbers 10 through 49 in the following manner.
    10 11 12 13 14 15 16 17 18 19
    20 21 22 23 24 25 26 27 28 29
    30 31 32 33 34 35 36 37 38 39
    40 41 42 43 44 45 46 47 48 49
5.b) write a program that generate each of the following patterns
 a)* * * * * * *         b) * * * * * * * *
   * * * * * * *            *             *
   * * * * * * *            *             *
   * * * * * * *            *             *
                            *             *
                            *             *
                            * * * * * * * *
c)
*
* *
* * *
* * * *
* * * * *
* * * * * *
half pyramid
d)
* * * * * *
* * * * *
* * * *
* * *
* *
*
e)
* * * * * *
*       *
*     *
*  *
* *
*
f)
     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *

g) * * * * * *
    * * * * *
     * * * *
      * * *
       * *
        *
h)   *
    * *
   *   *
  *     *
 *       *
* * * * * *
i)
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
j)
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
k)
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
l)
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
m)
A B C D E F
G H I J K L
M N O P Q R
S T U V W X
n)
A
A B
A B C
A B C D
A B C D E
5c)update your program in 5a) to allow user to input the dimension of the pattern.

*/

#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
//answer(code) for Exercise 1
//1.a
int num_of_people,nU;

cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE FIRST PROGRAM: TO CALCULATE THE BMI                           "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"For how many people do you want to calculate the BMI"<<endl;
    system("color 04");
    cin>>num_of_people;
    for(nU=0;nU<num_of_people;nU++)
    {float height,weight,BMI;
    char gender;
    height:
    cout<<"enter the height (in meter):"<<endl;
    cin>>height;
    if(height<=0){
        cout<<"you have inserted incorrect value"<<endl;
        goto height;
    }
   weight:
    cout<<"enter the weight (in killogram)"<<endl;
    cin>>weight;
     if(weight<=0){
        cout<<"you have inserted incorrect value"<<endl;
        goto weight;
    }
    gender:
    cout<<"enter the gender(M or F)"<<endl;
    cin>>gender;
      if(gender!='f'&& gender!='F'&& gender!='M'&&gender!='m'){
        cout<<"you have inserted incorrect value"<<endl;
        goto gender;
    }
    BMI=weight/(height*height);
    if(gender=='F'||gender=='f'){
        if(BMI<=25&&BMI>=20){
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you have Healthy BMI \n ";}
        else if(BMI>25){
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you should minimize your food\n ";
        }
        else{
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you should eat more food\n ";
        }
    }
   if(gender=='M'||gender=='m'){
        if(BMI<=23&&BMI>=18){
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you have Healthy BMI\n ";}
        else if(BMI>23){
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you should minimize your food\n ";
        }
        else{
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you should eat more food \n";
        }
    }
    cout<<endl;
    }
//1.b
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: TO CHECK THE TYPE OF  symbol from the keyboard   "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
char symbol;
  cout<<"enter any symbol from the keyboard"<<endl;
  cin>>symbol;
  if (symbol>='A' && symbol<='Z')
  {
    if(symbol=='A'|| symbol=='E'|| symbol=='I' || symbol== 'O' || symbol== 'U')
        cout<<"the symbol is upper case vowel"<<endl;
   else
        cout<<"the symbol is upper case consonant"<<endl;
  }
  else if (symbol>='a' && symbol <= 'z')
  {
    if(symbol=='a'|| symbol=='e'|| symbol =='i' || symbol== 'o' || symbol== 'u')
        cout<<"the symbol is lower case vowel"<<endl;
    else
        cout<<"the symbol is lower case consonant"<<endl;
  }
  else if (symbol>='0' && symbol<='9')
  {
    if(symbol%2==0)
    cout<<"the digit is even"<<endl;
    else
    cout<<"the digit is odd"<<endl;
  }
 else
    cout<<"you symbol is a special character"<<endl;

//ansewr (code) for Exercise 2
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: TO CALCULATE YOUR NET-SALARY                     "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int count;
    cout << "\n How many times do you want to calculate your income"<<endl;
    cin >> count;
for (int i=0; i<count; i++)
{
    int gross_salary, work_hour, pension, tax_rate,overtime_bonusrate,overtime_pay,extra_hours,net_salary;
    cout << "\n What is your gross salary: "<<endl;
    cin >> gross_salary;
    cout << "\n How much hours do you work it : "<<endl;
    cin >> work_hour;
    if (work_hour > 40){
        cout << "\n Enter your overtime bonus rate: "<<endl;
        cin >> overtime_bonusrate;
    }
    extra_hours = work_hour - 40;
    overtime_pay = extra_hours * overtime_bonusrate;
    pension = gross_salary*7/100;
    net_salary = (gross_salary)+overtime_pay;
    if (net_salary <=200){
        tax_rate = net_salary*0/100;
    }
    else if (net_salary >=200 && net_salary <=600){
        tax_rate = net_salary*10/100;
    }
    else if (net_salary >=600 && net_salary <=1200){
        tax_rate = net_salary*15/100;
    }
    else if (net_salary >=1200 && net_salary <=2000){
        tax_rate = net_salary*20/100;
    }
    else if (net_salary>=2000 && net_salary <= 3500){
        tax_rate = net_salary*25/100;
    }
    else {
        tax_rate = net_salary*30/100;
    }
    net_salary = net_salary - tax_rate - pension;
    if (net_salary>0){
    cout << "Your net salary is "<< net_salary << endl;
    }
  else
  {

    pension = gross_salary*7/100;
    net_salary = gross_salary ;
        if (net_salary <=200){
        tax_rate = net_salary*0/100;
    }
    else if (net_salary >=200 && net_salary <=600){
        tax_rate = net_salary*10/100;
    }
    else if (net_salary >=600 && net_salary <=1200){
        tax_rate = net_salary*15/100;
    }
    else if (net_salary >=1200 && net_salary <=2000){
        tax_rate = net_salary*20/100;
    }
    else if (net_salary>=2000 && net_salary <= 3500){
        tax_rate = net_salary*25/100;
    }
    else {
        tax_rate = net_salary*30/100;
    }
    net_salary = net_salary - tax_rate - pension;
    if (net_salary>0){
    cout << "Your net salary is "<< net_salary << endl;
  }
  }
}

//answer (code) for Exercise 3
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: TO CALCULATE THE LETTER GRADE                    "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
float mark,quiz,test,assignment,project,final_exam;
 quiz:cout<<"\n please enter the quiz result out of 5%"<<endl;
 cin>>quiz;
 while(quiz>5||quiz<0)goto quiz;
 test:cout<<"please enter the test result out of 15%"<<endl;
 cin>>test;
 while(test>15)goto test;
 project:cout<<"please enter the project out of 20%"<<endl;
 cin>>project;
 while(project>20)goto project;
 assignment:cout<<"please enter the assignment out of 10%"<<endl;
 cin>>assignment;
 while(assignment>10)goto assignment;
 final_exam:cout<<"please enter the final exam  out of 50%"<<endl;
 cin>>final_exam;
 while(final_exam>50)goto final_exam;

mark =quiz+test+assignment+project+final_exam;

   if(mark>=90)
   cout<<"your grade is A+"<<endl;
   else if (mark>=80)
    cout<<" your grade is A"<<endl;
   else if (mark >=75)
    cout <<"your grade is B+"<<endl;
   else if (mark>=60)
    cout<<"your grade is B"<<endl;
   else if(mark>=55)
    cout<<"your grade is C+"<<endl;
   else if (mark>=45)
    cout<<"your grade is C"<<endl;
   else if (mark>=30)
    cout<<"your grade is D"<<endl;
   else
    cout<<"your grade is F"<<endl;
//answer(code) to Exercise 4
//a)
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: GIVES THE REVERSE OF A DIGIT             "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int number,digit;
cout<<" \n enter a number: ";
cin>>number;
while(number!=0)
{
    digit=number%10;
    cout<<digit;
    number/=10;
}

//b
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: THE TOTAL NUMBER OF THE DIGITS   "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int num,count_=0;
cout<<" \n enter an intger : ";
cin>>num;
while(num!=0)
{
num/=10;
count_++;

}
cout<<"number of digits: "<<count_<<endl;
//c
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: THE TOTAL SUM OF NUMBERS IN THE DIGIT   "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int NUMBER,DIGIT,sum=0;
cout<<"\n enter a number: "<<endl;
cin>>NUMBER;
while(NUMBER!=0)
{
 DIGIT=NUMBER%10;
 sum+=DIGIT;
 NUMBER/=10;
}
cout<<"the sum of the numbers in the digit is: "<<sum<<endl;
//d
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: THE PRODUCT OF EVEN DIGITS IN THE NUMBER"<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int num1,num2,r,pro=1,i;
cout<<" \n input a number: ";
cin>>num1;
num2=num1;
for(i=num1;i>0;i=i/10)
{
    r=i%10;
    if(r%2==0)
        pro=pro*r;
}
cout<<"the product of even  digits of "<<num2<<" is: "<<pro<<endl;
//e
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW : THE FIRST AND THE LAST NUMBER OF THE DIGITS   "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int n;
cout<<" \n enter a number : ";
cin>>n;

int firstdigit=n;
while(firstdigit>=10)
{
    firstdigit/=10;
}
int lastdigit=n%10;
cout<<"the first digit of the number is: "<<firstdigit<<endl;
cout<<"the last digit of the number is: "<<lastdigit<<endl;
//f
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: SWAPS THE FIRST AND LAST DIGITS OF THE NUMBER  "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int nn,num11,first, last,digits,a,b;
cout<<"input any number: ";
cin>>num11;
digits=(int)log10(num11);
first=num11/pow(10,digits);
last=num11%10;
a=first*(pow(10,digits));
b=num11%a;
num11=b/10;
nn=last*(pow(10,digits))+(num11*10+first);
cout<<"the number after Swaping the first and last digits are : "<<nn<<endl;
//G
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: TO CHECK WHETHER A NUMBER IS PALINDROM OR NOT  "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int N;
cout<<"\n enter a number : ";
cin>>N;

int first_digit=N;
while(first_digit>=10)
{
    first_digit/=10;
}
int last_digit=N%10;
if (last_digit==first_digit)
cout<<N<<" : is a Palindrome number "<<endl;
else

cout<<N<<" : is not a Palindrome number "<<endl;

//h
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: FINDS A FREQUENCY OF DIGITS IN A NUMBER  "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int N_,ctr,R;
    cout<<"\n input any number : ";
    cin>>N_;
    cout<< "Digit" <<"\t\t"<<"Frequency"<<endl;
    for(int i=0;i<10;i++)
        {
            cout<<i<<"...................";
            ctr=0;
            for(int j=N_;j>0;j=j/10)
            {
                R=j%10;
                if(R==i)
                {
                    ctr++;
                }
            }
            cout<<ctr<<endl;
        }
//i
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT   "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int NUM, originalNum, remainder, n_ = 0;
    float result = 0.0;
   cout << " \n Enter a three-digit integer: ";
    cin >> NUM;
    originalNum = NUM;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n_;
    }
    originalNum = NUM;
   while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n_);
        originalNum /= 10;
    }
   if (result == NUM)
        cout << NUM << " is an Armstrong number.";
    else
        cout << NUM << " is not an Armstrong number.";
//j
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: CHECKS WHETHER A NUMBER IS STRONG OR NOT  "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
 int nN,digitT,orginal,fact=1,sumM=0;
cout<<" enter a number ";
cin>>nN;
orginal=nN;
while(orginal!=0)
{
  digitT=orginal%10;
  for(int i=1;i<=digitT;i++)
  {
     fact=fact*i;
     sumM=sum+fact;
  }
  orginal=orginal/10;

}
if(sumM=nN)
            cout << nN<< " is a Strong number.";
    else
        cout << nN << " is not a Strong number.";
//k
cout<<"\n______________________________________________________________________"<<endl;
cout<<"    THE PROGRAM BELOW: CHECKS WHETHER A NUMBER IS PERFECT OR NOT  "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int num_1, SUM = 0;
    cout << "\n Enter a number: ";
    cin >> num_1;
    for (int i = 1; i < num_1; i++)
    {
        if (num_1 % i == 0)
            SUM += i;
    }
    if (SUM == num_1)
        cout << num_1 << " is a perfect number";
    else
        cout << num_1 << " is not a perfect number";

//answer(code) to exercise 5
/*5.a) write a an application to print out the numbers 10 through 49 in the following manner.
    10 11 12 13 14 15 16 17 18 19
    20 21 22 23 24 25 26 27 28 29
    30 31 32 33 34 35 36 37 38 39
    40 41 42 43 44 45 46 47 48 49*/
cout<<"\n______________________________________________________________________"<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
for(int i=10;i<=40;i=i+10)
{
{
    for(int j=i;j<=i+9;j++)
    cout<<j<<" ";
}
cout<<endl;
}
/*5.b) write a program that generate each of the following patterns
a) * * * * * * *
   * * * * * * *
   * * * * * * *
   * * * * * * * */
   cout<<"\n______________________________________________________________________"<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
for(int i=1;i<=4;i++)
{
for(int j=1;j<=7;j++)
{
     cout<<"*"<<" ";
}
cout<<endl;
}

/*b)
   * * * * * * * *
   *             *
   *             *
   *             *
   *             *
   *             *
   * * * * * * * *    */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
for(int i=1;i<=7;i++)
{
    if(i==1 || i==7)
{
    for(int j=1;j<=8;j++)
    cout<<"*"<<" ";
}
else
{
    for(int j=1;j<=8;j++)
 {if(j==1 || j==8)
  cout<<"*"<<" ";
else
cout<<"  ";
 }
}
cout<<endl;
}
/*c)
*
* *
* * *
* * * *
* * * * *
* * * * * *
Half pyramid  */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"                 Half pyramid "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
 for(int i=1;i<=6;i++)
{
for(int j=1;j<=i;j++)
{
     cout<<"*"<<" ";
}
cout<<endl;
}
/* d)
* * * * * *
* * * * *
* * * *
* * *
* *
*

inverted half pyramid */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"              inverted Half pyramid "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
for(int i=1;i<=6;i++)
{
for(int j=i;j<=6;j++)
{
     cout<<"*"<<" ";
}
cout<<endl;
}
/*e)
* * * * * *
*       *
*     *
*   *
* *
*  */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"             Hollow inverted Half pyramid "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int h=0;
for(int i=0; i<6;i++)
    cout<<"* ";
for(int i=6;i>=1;--i)
    {
        for(int j=0;j<6-i;++j){
        while(h!=(2*i-1))
        {
            if(h==0 || h== 2*i-2)
                cout<<"*";
            else
                cout<< " " ;
            h++;
        }
        }
       h=0;
       cout<<endl;
    }
/*f)
     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *    */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"                     full pyramid       "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
for(int i=0; i<6;i++)
{
    for(int space=1;space<=6-i;space++)

        cout<<"  ";
     for(int j=0;j<=i;j++)
    {
       cout<<"*"<< "  ";
    }
    cout<<endl;
}

/*g) * * * * * *
     * * * * *
      * * * *
       * * *
        * *
         *     */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"                      inverted full pyramid       "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
 for(int i=0; i<6;i++)
{
    for(int space=0;space<=i;space++)
         cout<<"  ";
     for(int j=1;j<=6-i;j++)
    {
       cout<<" *"<< "  ";
    }
    cout<<endl;
}
/*h)   *
      * *
     *   *
    *     *
   *       *
  * * * * * *  */
  cout<<"\n______________________________________________________________________"<<endl;
 cout<<"                     Hollow inverted Half pyramid       "<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
  for(int i=1; i<=6;i++)
{
    for(int j=1;j<=(20-i);j++)
       {
     cout<<" ";
       }
       if(i==1||i==6)
       {
           for(int j=1;j<=i;j++)
           {
               cout<<"* ";
           }
       }
       else
       {
           cout<<"*";
           for(int j=1; j<=2*i-3; j++)
           {
               cout<<" ";
           }
            cout<<"*";
       }
cout<<endl;
}
/*i)
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
cout<<"\n______________________________________________________________________"<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
  cout<<j<<" ";
}
cout<<endl;
}
/*j)
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5  */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
for(int i=1;i<=5;i++)
{
for(int j=1;j<=i;j++)
{
  cout<<j<<" ";
}
cout<<endl;
}
/*k)
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1  */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
for(int i=1;i<=5;i++)
{
for(int j=i;j<=5;j++)
{
  cout<<"  ";
}
for(int j=i;j>=1;j--)
{
  cout<<j<<" ";
}
cout<<endl;
}
/*l)
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
for(int i=1;i<=5;i++)
{
for(char j='a';j<='e';j++)
{
  cout<<j<<" ";
}
cout<<endl;
}

/*m)
A B C D E F
G H I J K L
M N O P Q R
S T U V W X */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;

for(char i='A';i<='X';i=i+6)
{
for(char j=i ;j<=i+6;j++)
{
  cout<<j<<" ";
}
cout<<endl;
}
/*
A
A B
A B C
A B C D
A B C D E */
cout<<"\n______________________________________________________________________"<<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
for(char i='A';i<='E';i++)
{
for(char j='A' ;j<=i;j++)
{
  cout<<j<<" ";
}
cout<<endl;
}
/*5.c)update your program in 5.a) to allow user to input the dimension of the pattern.*/
cout<<"\n______________________________________________________________________"<<endl;
cout<<"printing  pattern with numbers for n number of rows and columns"   <<endl;
cout<<"-----------------------------------------------------------------------"<<endl;
int rows , columns;
cout<<"enter the number of rows : ";
cin>>rows;
cout<<"enter the number of columns : ";
cin>>columns;
rows=rows*10;
for(int i=10;i<=rows;i=i+10)
{
for(int j=i ;j<=i+columns;j++)
{
  cout<<j<<" ";
}
cout<<endl;
}




 return 0;
}
