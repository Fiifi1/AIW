/*ASSIGNMENT 1  - CSCD205
   CREATED BY   -   : 10665423
   DATE : AUGUST, 29 2018
   A PROGGRAM TO DETERMINE WHETHER OR NOT A NUMBER IS PRIME */

#include <iostream>
using namespace std;

int main()
{
   int number;
   int kount = 0;
   cout<<"Please enter a positive integer: \t";
   cin>>number;

   if (number==0 || number==1)
    {cout<<number<<" is not a prime number"<<endl;}
   else{

   for(int i=2;  i<=number/2;  i++) {
      if(number % i == 0) {
         kount++;
         break;
      }
   }
   if (kount>=1)
      cout<<number<<" is not a prime number";
   else
      cout<<number<<" is a prime number";
   cout<<endl;
   }
   return 0;
}