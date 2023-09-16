// operator overloading
// object using operator
#include<iostream>
using namespace std;
class increase
{
    int a;
    public:
    increase()
    {
        a=100;
        cout<<"\n a= "<<a;                      // 100
    }
    void operator++()       //pre
    {
        a=a+100;
        cout<<"\n new value = "<<a;            // 200
    }
    void operator++(int)    //post
    {
        cout<<"\n new value= "<<a;            // 200
        a=a+100;
        cout<<"\n post increment "<<a;       //  300
    }
};
int main()
{
    increase i;
    ++i;            // it calls the pre increament operator
    i++;            // it calls the post increament operator

}