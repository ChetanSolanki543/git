// static variables = it allocates a common memory for all objects
// always initialise static variale outside the class with scope resolution operator
#include <iostream>
using namespace std;
class Emp
{
    static int eno;
    string name;
    float sal;
    public:
    Emp()
    { 
        eno++;
    }
    void putdata()
    {
        cout <<"\n eno ="<<eno;
    }
};
int Emp::eno=100;
int main() {
    Emp e1;
    e1.putdata();
    Emp e2;
    e2.putdata();
}