// structure with multiple objects 
#include<iostream>                                                                                                                                                                                            
using namespace std;
struct emp  // user defined data type
    {
        int eno;
        string name;
        float sal;
    };
void fun(struct emp e) 
{
    cout<<"\nemp no ="<<e.eno;
    cout<<"\nemp name="<<e.name;
    cout<<"\nemp sal="<<e.sal;
}

int main() {
    emp e={101,"arvind",23000};
    fun(e);
    emp e1={102,"vivek",34000};
    fun(e1);
  return 0;
}