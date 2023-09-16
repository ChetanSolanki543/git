#include <iostream>
using namespace std;
struct emp  // user defined data type
    {
        int eno;
        string name;
        float sal;
    };
int main() {
    emp e={101,"arvind",23000};
    cout<<"\nemp no ="<<e.eno;
    cout<<"\nemp name="<<e.name;
    cout<<"\nemp sal="<<e.sal;
    
    return 0;
}