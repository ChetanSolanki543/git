// static function
// in a static function only static variables are run
#include<iostream>
using namespace std;
class Emp
{
    static int eno;
    string name;
    float sal;
    public:
    static void generateEmp()
    {
        // sal = 1000;
        eno++;
        cout<<"\n eno = "<<eno;
    }
};
int Emp::eno=100;
int main()
{
    Emp::generateEmp();         // by the use of :: with class, we can directly call function
    Emp::generateEmp();         // we don't need any object
}