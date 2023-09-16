// union - it doest allocates memory for all variables so only last value can be accessed
#include <iostream>
using namespace std;
union book
{
    int bno;
    float price;
    
    void getdata()
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