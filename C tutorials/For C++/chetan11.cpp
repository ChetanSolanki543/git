#include <iostream>
using namespace std;
// structure
int main() {
    struct emp  // user defined data type
    {
        int eno;
        string name;
        float sal;
    };
    emp e={101,"chetan",23000};
    cout<<"\nemp no ="<<e.eno;
    cout<<"\nemp name="<<e.name;
    cout<<"\nemp sal="<<e.sal;
    
    return 0;
}