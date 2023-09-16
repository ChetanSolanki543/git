/* paramertised constructor = Constructors that can take arguments are known as 
                              parameterized constructors. */

#include <iostream>
using namespace std;
class Ex
{
    int a;
    public:
    Ex(int value)
    {
        a=value;
    }
    void putdata()
    {
        cout<<"\n a= "<<a;
    }
};

int main()
{
    Ex obj(2);             // parameterised cons...
    obj.putdata();
}