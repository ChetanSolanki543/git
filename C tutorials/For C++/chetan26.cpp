#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

void getData(Person& p) {
    cout << "Enter name: ";
    getline(cin, p.name);

    cout << "Enter age: ";
    cin >> p.age;
}

void putData(const Person& p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
}

int main() {
    Person p;

    getData(p);
    putData(p);

    if (p.age >= 18) {
        cout << p.name << " is an adult." << endl;
    } else {
        cout << p.name << " is a minor." << endl;
    }

    return 0;
}
