#include<iostream>
using namespace std;
struct student
{
    int eno,fees;
    string name,course;

    void getdata()
    {
        cout <<"\n enter eno & name & course ";
        cin>>eno>>name>>course;
    }

    void putdata()
    {
        cout<<"\n eno = "<<eno;
        cout <<"\n name = "<<name;
        cout <<"\n course = "<<course;
        cout<<"\n fees="<<fees;
    }

    void calculation()
    {
        if (course=="java")
        {
            fees = 8000;
        }

        else if (course=="c")
        {
            fees = 6000;
        }

        else
        {
            fees=20000;
        }
    } 

};
    int main()
    {
        student e;
        e.getdata();
        e.calculation();
        e.putdata();
        // cout <<"\n eno = "<<e.eno;

    /* student e1;
        e1.getdata();
        e1.putdata();*/
       // cout <<"\n name = "<<e.name;

    /* student e2;
        e2.getdata();
        e2.putdata();*/
        // cout <<"\n fees = "<<e.fees;

    /*  student e3;
        e3.getdata();
        e3.putdata();*/
        // cout <<"\n course = "<<e.course;     // yaha se bhi print krwa skte h
}    