// OOPs programming - class - function with arg with no return type 
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
        return 0;
    }