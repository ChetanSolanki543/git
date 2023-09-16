/* write c++ program to print book data using structure with function */
#include <iostream>
using namespace std;
struct book
{
    int num,bill,quan,price;
    string name,author;
    float discount;

    void getdata()
    {
        cout<<"\n book name ";
        getline(cin,name);
        cout<<"\n book num ";
        cin>>num;
        cout<<"\n author name ";
        getchar();                  // jaha cursor nhi rukhe waha getchar lagate hai
        getline(cin,author);
        cout<<"\n book quantity ";
        cin>>quan;
        cout<<"\n book price ";
        cin>>price;
    }

    void formula()
    {
        bill=price*quan;
        discount=bill/100*10;
    }
    
    void putdata()
    {
        cout<<"\n book name "<<name;
        cout<<"\n book num "<<num;
        cout<<"\n author name "<<author;
        cout<<"\n book price "<<price;
        cout<<"\n book quantity "<<quan;
        cout<<"\n book bill "<<bill;
        cout<<"\n discount on book "<<discount;
    }
};
    int main()
    {
        book b;
        b.getdata();
        b.formula();
        b.putdata();
    }