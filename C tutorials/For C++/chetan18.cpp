// prg to print even nos from 50 - 100 using for loop
#include<iostream>
using namespace std;
int main()
{
    int num;

    for (num=50;num<=100;num++)
    {
        if(num%2==0)
        {
            cout<<num<<endl;
        }
    }
    return 0;
}