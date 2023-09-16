// prg to print the details of book using constructors in class
#include <iostream>
using namespace std;
class book
{
    int pr;
    string bn;
    public:
    book(int pr, string bn)
    {
        this->pr=pr;
        this->bn=bn;
    }
    
    void putdata()
    {
        cout<<"\n enter book no = "<<bn;
        cout<<"\n book price is = "<<pr;
        
    }
};

int main()
{
    book b1(345,"Geeta");           // parameterized constructor
    b1.putdata();
}
