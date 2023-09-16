// prg to print factorial of a no.
// factorial = multiply a number with its lower nos
#include <iostream>
using namespace std;
class Ex
{
    int n,f;
    public:
    Ex()
    { f=1; }
    void getdata()
    {
        cout<<"\n enter a no = ";
        cin>>n;
    }
    void process()
    {
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
    }
    void putdata()
    {
        cout<<"\n n = "<<n;
        cout<<"\n factorial = "<<f;
    }
};   
int main()
{
    Ex e;
    e.getdata();
    e.process();
    e.putdata();
} 