#include<iostream>
using namespace std;
int main()
{
    /**
     * To perform all kinds of arithmetric operations.
    */
   int a = 9;
   int b = 5;
   cout << "The addition of the nunbers is : " << a + b << endl;
   cout << "The subtraction of the numbers is : " << a - b << endl;
   cout << "The division of the numbers is : " << a / b << endl;
   cout << "The multiplication of the numbers is : " << a * b << endl;
   cout << "The modulo of the numbers is : " << a % b << endl;

   //Increment operators
   // pre and post increments
   int y , x ;
   y = a++;
   x = ++b;
   cout << "The value of 'a' is now  :"<<a<<endl;
   cout << "The value of 'y'  is :" <<y<<endl;
   cout <<"The value of 'x' will be :"<<x<<endl<<"The value of 'b' is also : "<<b<<endl;

// Raletional operators
int m = 10;
int n = 7;
cout <<"m < n is "<<(m < n)<<endl<<"m > n is "<<(m > n)<<endl<<"m >= n is "<<(m >= n)<<endl<<"m <= n is "<<(m <= n)<<endl;
}