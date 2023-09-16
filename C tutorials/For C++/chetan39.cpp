// in class we make prg using function with argument with no return type
#include<iostream>
using namespace std;
class bank
{
    int ano;
    string name;
    float bal;

    public:
    void getdata()
    {
        cout<<"\n enter ano,name,bal";
        cin>>ano>>name>>bal;
    }

    void putdata()
    {
        cout<<"\n ano = "<<ano<<"\n name = "<<name<<"\n bal = "<<bal;

    }

    void deposit(int d)                          // here we declare a variable only 
    {   
        bal=bal+d;                              // here we use a variable 
        cout<<"\n u deposited "<<d;
        cout<<"\n ur final balance = "<<bal;
    }

    void withdraw(int w)
    {
        if(w>bal)
        {
            cout<<"\n not possible ";
            cout<<"\n ur balance = "<<bal; 
        }
        
        else
        {
            bal=bal-w;
            cout<<"\n u withdraw= "<<w;
            cout<<"\n ur new balance = "<<bal;
        }
    }
};
    int main()
    {
        bank b;
        b.getdata();
        b.deposit(4000);
        b.withdraw(2000);
        b.putdata();
    }