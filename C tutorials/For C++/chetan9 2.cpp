// function with array and loop
#include<iostream>
using namespace std;
void fun(int a[3])
{
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"\n "<<a[i];
    }
}
int main()
{
    int a[3]={34,56,6};
    fun(a);
    cout<<"\n";
    fun(a);
}