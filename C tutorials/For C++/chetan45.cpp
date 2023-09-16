// prg to print factorial of a no.
#include <iostream>
using namespace std;
class Ex
{
    int n,f;
    public:
    Ex()
    { f=1;}
    void getdata();
    void process();
    void putdata();
};

int main() {
    Ex obj;
    obj.getdata();
    obj.process();
    obj.putdata();
}

void Ex::getdata()
    {
        cout<<"\n enter a no ";
        cin>>n;
    }
    void Ex::process()
    {
        for(int i=1;i<=n;i++ )
        {
            f=f*i;
        }
    }
    void Ex::putdata()
    {
        cout<<"\n n ="<<n;
        cout<<"\n factorial ="<<f;
    }