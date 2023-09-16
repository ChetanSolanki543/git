// Structure with functions
// Structure : we access functions and variables directly. Now need to use public or private.
#include<iostream>
using namespace std;
struct emp
{
    int eno;
    string name;

    void getdata()
    {
        cout<<"\n enter eno & name";
        cin>>eno>>name;
    }
    void putdata()
    {
        cout <<"\n eno = "<<eno;
        cout <<"\n name = "<<name;
    }
};
    int main()
    {
        emp e;
        e.getdata();
        e.putdata();

        emp e1;
        e1.getdata();
        e1.putdata();
    }