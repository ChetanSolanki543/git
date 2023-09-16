//paramertised constructor
//this pointer - it refers to current obj
#include <iostream>
using namespace std;
class Ex
{
    int a;
    public:
    Ex(int a)
    {
        this->a=a;
    }
    void putdata()
    {
        cout<<"\n a= "<<a;
    }
};

int main() {
    Ex obj(2);              // parameterised cons...
    obj.putdata();
    }