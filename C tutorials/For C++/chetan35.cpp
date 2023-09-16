//OOPs programming - class - function with arg with return type 
#include <iostream>
using namespace std;
class book
{
    int bno;
    float price;
    public:
    void getdata(int b,int p)
    {
        bno=b;
        price=p;
    }
    
    int cal()
    {
        int  dis = price*5/100;
        return price-dis;
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
        b1.getdata(23,56);
        b1.putdata();
        int net=b1.cal();               // function calling as well as defining 
        cout<<"\n net amt ="<<net;
        return 0;
    }