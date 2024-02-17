#include<iostream>
using namespace std;
int main()
{
    //Boool is true or false
    //Is also a data type
    /**
     * Void data type do not accept any input 
     * It is also used to show that a function do not return anything
     * Or the function doo not accept any argument 
     * It is used as a pointer.
     * Such a pointer is general pointer.
     * You can typecast it to your need.
     * You can not deference a void pointer
     * But before you deference, first typecast it.
     * You can not declare a variable with void data type.
     * 
    */
   bool c= true;
   bool b = false;
   cout<<b<<endl;
   cout<<c<<endl;
   //You can use it in expression
   int u= 10;
   float f= 33.5;
   float k = u+true+f+false;
   cout<<k<<endl;
   //void data type
   void *ptr;
   int y = 456;
   ptr = &y;
  // ptr = &k;
   cout<<*(int*)ptr<<endl; // the typecasting
  // cout<<*(float*)ptr<<endl;

   

}