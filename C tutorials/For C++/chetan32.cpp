// class is user defined datatype. 
// All members of class are private whereas all members of structure are already public.
#include <iostream>
using namespace std;
class book
{
    int bno;
    float price;

    public:
    void getdata()                         // here declare and define together and no arguments.
    {
        cout<<"\n enter bno and price";
        cin>>bno>>price;
    }
    
    void putdata()
    {
        cout<<"\n bno="<<bno;
        cout<<"\n price= "<<price;
    }
};

    int main() 
    {
        book b1;
        b1.getdata();
        b1.putdata();
        return 0;
    }