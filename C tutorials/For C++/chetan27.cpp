/* write c++ program to print total , average and division for 5 subjects 
using structure with function */
#include <iostream>
using namespace std;
struct subjects
{
    int hindi,english,math,science,gk,total;
    float average;
    char grade;
    string name;

    void getdata()
    {
        cout<<"\n enter your name ";
        getline(cin,name);
        cout<<"\n enter hindi marks ";
        cin>>hindi;
        cout<<"\n enter english marks ";
        cin>>english;
        cout<<"\n enter math marks ";
        cin>>math;
        cout<<"\n enter science marks ";
        cin>>science;
        cout<<"\n enter gk marks ";
        cin>>gk;
    }
    void formula()
    {
        total = hindi+english+math+science+gk;
        average=total/5;
    }

    void putdata()
    {
        cout<<"\n your name is "<<name;
        cout<<"\n total marks "<<total;
        cout<<"\n average marks "<<average;
    }
};    
    int main()
    {
        subjects ram;
        ram.getdata();
        ram.formula();
        ram.putdata();
    }
