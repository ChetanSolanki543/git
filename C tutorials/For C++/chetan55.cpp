// inheritance
#include <iostream>
using namespace std;
class First
{
    int a;
    public:
    int getA()
    {
        a=5;
        return a;               // means transfer value of "a" to "getA"
                                // when we call "getA" we got value of "a"
    }
};
class Second
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
    First f;
    Second s;
    cout<<"\n f = "<<f.getA();
    cout<<"\n s = "<<s.getB();
}