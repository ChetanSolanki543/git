// multiple objects
// inheritance
// object of child class
include<iostream>
using namespace std;
class First             //parent class
{
    int a;
    public:
    int getA()
    {
        a=5;
        return a;
    }
};
class Second:public First           // child class
{
    int b;
    public:
    int getB()
    {
        b=10;
        return b;
    }
};
int main()
{
    Second s;
    cout<<"\n f= "<<s.getA();
    cout<<"\n s= "<<s.getB();
}        