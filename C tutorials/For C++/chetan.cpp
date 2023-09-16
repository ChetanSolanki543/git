#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,average,total;
    cout<<"\n enter a = ";
    cin>>a;
    cout<<"\n enter b = ";
    cin>>b;
    cout<<"\n enter c = ";
    cin>>c;
    cout<<"\n enter d = ";
    cin>>d;
    cout<<"\n enter e = ";
    cin>>e;
    total=a+b+c+d+e;
    average=total/5;
    cout<<"\n total marks"<<total;
    
    cout<<"\n average"<<average;
    return 0;
}