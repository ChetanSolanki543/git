// prg to print odd nos from 100 - 1 using for loop
#include<iostream>
using namespace std;
int main()
{
    int num;

    for (num=100;num>=1;num--)
    {
        if(num%2 !=0)
        {
            cout<<num<<endl;
        }
    }
    return 0;
}