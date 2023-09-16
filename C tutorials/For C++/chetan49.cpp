/* copy constructor - if we pass obj of the same class as argument 
to the constructor of the class, then such constructors are copy
constructors
In a copy constructor we make also 2 or more objects.                              */

#include <iostream>
using namespace std;
class Ex
{
    int a,b;
    public:
    Ex(int a,int b)
    {
        this->a=a;
        this->b=b;
    }

    Ex(Ex &obj1)
    {
        this->a=obj1.a;
        this->b=obj1.b;
    }
    void putdata()
    {
        cout<<"\n a = "<<a;
        cout<<"\n b = "<<b;
    }
};

int main()
{
    Ex obj1(2,3);       // parameterised constructors
    Ex obj2(obj1);         // obj2=obj1   copy constructors
    obj1.putdata();
    obj2.putdata();
}    