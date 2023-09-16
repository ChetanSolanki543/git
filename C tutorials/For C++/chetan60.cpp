// Hybrid Inheritance
#include<iostream>
using namespace std;
class First
{
    int a;
    public:
    int getA()
    {
        a=5;
        return a;
    }
};
class Second : public First
{
    int b;
    public:
    int getB()
    {
        b=10;
        return b;
    }
};
class Third : public Second
{
    int c;
    public:
    int getC()
    {
        c=15;
        return c;
    }
};
class Fourth : public First
{
    public:
    int square()
    {
        cout<<"\n square = "<<getA() * getA();
    }
};
int main()
{
    Third t;
    Fourth f;
    cout<<"\n f = "<<t.getA();
    cout<<"\n s = "<<t.getB();
    cout<<"\n t = "<<t.getC();
    cout<<"\n sq = "<<f.square();
    
}