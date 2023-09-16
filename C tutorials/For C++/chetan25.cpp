#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    Person p;

    cout << "Enter your name: ";
    cin >> p.name;

    cout << "Enter your age: ";
    cin >> p.age;

    if (p.age < 18) 
    {
    cout << "Sorry, " << p.name << ", you are not allowed to vote yet." << endl;
    }   
    
    else
    {
        cout << "Congratulations, " << p.name << ", you are eligible to vote!" << endl;
    }
    
    return 0;
}
