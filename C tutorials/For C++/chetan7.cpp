// Pointers
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<"\n a= "<<a;
    cout<<"\n p= "<<p;
    // p will print address in hexadecimal value
    cout<<"\n value from p = "<<*p;
    *p=0;
    cout<<"\n a="<<a;
}