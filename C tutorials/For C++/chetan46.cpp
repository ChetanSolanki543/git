// types of constructions - 3 types of constructors 
//1. default constructor = A constructor to which no arguments are passed is called the Default constructor. It is also called a constructor with no parameters.
//2. paramertised constructor = Constructors that can take arguments are known as parameterized constructors. 
//3. copy constructor = The copy constructor in c++ is a constructor that creates an object by initialising it with a previously created object of the same class.
#include <iostream>
using namespace std;
class Ex
{
    int n,f;
    public:
    Ex ()                       // default constructor
    {
        n=1;
    }
    void putdata()
    {
        cout<<"\n n = "<<n;
    }

};
int main()
{
    Ex obj;
    obj.putdata();
}