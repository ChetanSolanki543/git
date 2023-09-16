// nested member function
#include<iostream>
using namespace std;
class book
{
    int bno;                        // data members
    float price;
    public:
    void getdata(int b,int p);      // member function
    void putdata();                 // here we only declare getdata and putdata 
};
    int main()
    {
        book b1;
        b1.getdata(23,56);
        return 0;
    }

    void book::getdata(int b,int p)     // here we define the getdata and also putdata outside the class
    {
        bno=b;
        price=p;
        putdata();
    }

    void book::putdata()
    {
        cout<<"\n bno = "<<bno;
        cout<<"\n price = "<<price;
    }


    /* if getdata and putdata are define from outside the class then we don't need to recall 
        again. Here getdata is not completly define outside the class thatswhy we recall it from
        main function.
    */