#include<iostream>
using namespace std;
int main()
{
    /**
     * to accept and print out input to user
    */
   char name[50];
   cout << "Please enter your name"<< endl;
   cin >> name;
   int age;
   cout << "Please enter your age" <<endl;
   cin >> age;
   cout << "Hello "<<name << " Your are "<<age << " years old."<<endl;
}