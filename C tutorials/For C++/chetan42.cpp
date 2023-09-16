/* write a c++ prg to accept and display patient record using class
pno, pname, roomno, days, rate,amt      */
#include<iostream>
using namespace std;
class patient
{
    int pno,roomno,days,rate;           // in class we cannot declare and define together
    string pname;
    float amt,namt;

    public :
    void getdata()
    {
        cout<<"\nenter patient no ";
        cin>>pno;
        cout<<"\nenter patient name ";
        cin>>pname;
        cout<<"\nenter roomno ";
        cin>>roomno;
        cout<<"\nhow many days admit ";
        cin>>days;
        rate=500;
        amt=5000;
    }

    void putdata()
    {
        cout<<"\n enter patient no "<<pno<<"\n enter patient name "<<pname<<"\n enter roomno "<<roomno<<"\n how many days admit "<<days;
        cout<<"\n rate "<<rate<<"\n new amount "<<namt;
    }

    void cal()
    {
        int nrate=rate*days;
        namt=nrate+amt;
    }
};
    int main()
    {
        patient p;
        p.getdata();
        p.cal();
        p.putdata();
    }