#include<iostream>
/**
 * To print wide character usind wchar_t
*/
using namespace std;
int main()
{
    wchar_t ch=L'a';
    return 0;
    wcout<<ch<<endl;
    cout<<sizeof(wchar_t)<<endl;
}