// program to check whether a string is palindrom or not ex. DAD, NITIN 
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1[10],s2[10];

    cout<<"\n enter s1 = ";     // india
    gets(cin,s1);

    strcpy(s2,s1);
    
    strlen(s1)-1;                 // aidni

    cout<<"s2 = ",s2;

    cout<<"\n string is palindrom = ", strcpy(s1,s2);

return 0;
}