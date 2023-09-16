// structure with multiple objects
#include<iostream>
using namespace std;
struct emp
{
    int eno;
    string name;
    float sal;
};                                      // struct = keyword hai
                                        // emp = data type hai
void fun(struct emp e)                   // e = object hai
{                                       // emp and e = ye change bhi kr skte hai
    cout<<"\n emp no = "<<e.eno;
    cout<<"\n emp name = "<<e.name;
    cout<<"\n emp sal = "<<e.sal;
}

int main()
{
    emp e={101,"arvind",23000};
    fun (e);
    emp e1={102,"vivek",34000};
    fun(e1);
    return 0;
}