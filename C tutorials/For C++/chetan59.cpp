// Hierarchical inheritance
#include<iostream>
using namespace std;
class First                          // parent class
{
    int a;
    public:
    int getA()
    {
        a=5;
        return a;
    }
};
class Second:public First            //child class
{
    int b;
    public:
    int getB()
    {
        b=10;
        return b;
    }
};
class Third:public First             //child class
{
    int c;
    public:
    int getC()
    {
        c=15;
        return c;
    }
};
int main()
{
    Second s;
    Third t;
    cout<<"\n f = "<<s.getA();
    cout<<"\n s = "<<s.getB();
    cout<<"\n f = "<<t.getA();
    cout<<"\n t = "<<t.getC();
}