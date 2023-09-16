// multiple inheritance
#include <iostream>
using namespace std;
class First                                  //parent class
{  
    int a;
    public:
    int getA()
    {
        a=5;
        return a;
    }
};
class Second                                  // parent class
{  
    int b;
    public:
    int getB()
    {
        b=10; 
        return b;
    }
};
class Third:public First, public Second          // child class
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
        Third t;
        cout<<"\n f =" <<t.getA();
        cout<<"\n s =" <<t.getB();
        cout<<"\n t ="<<t.getC();
    }