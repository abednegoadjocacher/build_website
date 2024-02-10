#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    unsigned short _ushort = 53;
    signed short _sshort = -78;
    int i = 738929207;
    long int _Li = 456778;
    long long int _LLi = 8983984948494;
/**
 * To print the size of the data types
*/
    cout<<"the size of unsigned short is :"<<sizeof(unsigned short)<<endl;
    cout<<"the size of signed short is :"<<sizeof(signed short)<<endl;
    cout<<"the size of int is :"<<sizeof(int)<<endl;
    cout<<"the size of long int is :"<<sizeof(long int)<<endl;
    cout<<"the size of long long int is :"<<sizeof(long long int)<<endl;
    cout<<"the size of short int is :"<<sizeof(short int)<<endl;
    cout<<"the size of unsigned long int is :"<<sizeof( unsigned long int)<<" bytes"<<endl;
    cout<<"the size of float is :"<<sizeof(float)<<" bytes"<<endl;

/**
 * to set precicion of a certain data type
*/
cout<<setprecision(4);
cout<<"the value of _ushort is :"<<_ushort<<endl;
cout<<"the value of _sshort is :"<<_sshort<<endl;
cout<<"the value of i is :"<<i<<endl;
cout<<"the value of long int is :"<<_Li<<endl;
cout<<"the value of long long int is :"<<_LLi<<endl;
/* the actual digits cout can print to the screen*/
cout<<cout.precision()<<" digits"<<endl;

}