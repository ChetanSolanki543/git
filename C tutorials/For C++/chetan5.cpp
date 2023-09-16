#include<iostream>
using namespace std;
int main()
{
    string name;
    cout <<"\n enter name  ";
    //cin>>name;
    getline(cin,name);

    cout<<"\n welcome "<<name;
    return 0;
    
}