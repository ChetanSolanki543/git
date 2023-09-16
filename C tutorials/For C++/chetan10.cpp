#include <iostream>
using namespace std;
void fun(int *p)
{
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"\n"<<*p;
        p++;
    }
}

int main() {
   int a[3]={34,56,6};
   fun(a);
   return 0;
}