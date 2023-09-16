// member function defined outside the class
// function with argument with no return type
#include<iostream>
using namespace std;
class Book
{
    int bno;
    float price;
    public:
    void getdata(int b, int p) ;
    void putdata();
};
    int main()
    {
        Book b1;
        b1.getdata(23,56);
        b1.putdata();
        return 0;
    }
    void Book::getdata(int b,int p)
    {
        bno=b;
        price=p;
    }
    void Book::putdata()
    {
        cout<<"\n bno = "<<bno;
        cout<<"\n price = "<<price;
    }