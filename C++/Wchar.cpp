#include<iostream>
/**
 * To print wide character usind wchar_t
*/
using namespace std;
int main()
{
    wchar_t ch=L'p';
    wcout<<ch<<endl;
    cout<<"the size of wide character is "<<sizeof(wchar_t)<<" bytes"<<endl;
     return 0;
}