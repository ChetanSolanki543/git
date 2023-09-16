// prg to print table of a given number using for loop
#include<iostream>
using namespace std;
int main()
{
    int i,num;

    cout<<"\n enter value ";
    cin>>i;
    for (num=1;num<=10;num++)
    {
        if(i>0)
        {
            cout<<num*i<<endl;
        }
    }
    return 0;
}