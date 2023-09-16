#include <iostream>
using namespace std;
int main()
{
    int bill,discount,total;
    cout<<"\n enter bill = ";
    cin>>bill;
    discount=bill/100*10;
    total=bill-discount;
    if (5000<bill)
   { cout<<"\n total ="<<total;}
    else
    {cout<<"\n bill = "<<bill;}
    return 0;
}