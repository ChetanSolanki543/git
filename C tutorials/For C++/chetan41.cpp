// member functions defined outside the class, nested member function
#include<iostream>
using namespace std;
class bank
{
    int ano;
    string name;
    float bal;
    
    public:
    void getdata();
    void putdata();
    void deposit(int d);
    void withdraw(int w);
};
    int main()
    {
        bank b;
        b.getdata();
        b.putdata();
    }

    void bank::getdata()
    {
        cout<<"\n enter ano, name,bal";
        cin>>ano>>name>>bal;
        deposit(4000);
        withdraw(2000);
    }
    
    void bank::putdata()
    {
        cout<<"\n ano="<<ano;
        cout<<"\n name ="<<name;
        cout<<"\n bal ="<<bal;
    }
    
    void bank::deposit(int d)
    {   
        bal=bal+d;
        cout<<"\n u deposited = "<<d;
        cout<<"\n ur final balance ="<<bal;
    }
    
    void bank::withdraw(int w)
    {
        if(w>bal)
        {   
            cout<<"\n not possible";
            cout<<"\n ur balance ="<<bal; 
        }
        
        else
        {   
            bal=bal-w;
            cout<<"\n u withdraw="<<w;
            cout<<"\n ur new balance ="<<bal; 
        }

    }