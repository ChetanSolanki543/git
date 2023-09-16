// constructors - are special functions with name same as the class name, they must be in public section, they are called automatically by the sys when obj of the class is created, they dont have the return type, they intialise the class variable
#include <iostream>
using namespace std;
class Ex
{
    int a;
    public:
    Ex()
    { 
        a=10;  
    }
    void putdata()
    {
        cout<<"\n a ="<<a;
    }
};
int main() 
{
    Ex obj;
    obj.putdata();
}