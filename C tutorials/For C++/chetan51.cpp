/* constructors - are special functions with name same as the class name, they must be in public 
section, they are called automatically by the sys when obj of the class is created, they dont 
have the return type, they intialise the class variable */

#include<iostream>
using namespace std;
class MyClass 
{
    public:
    MyClass()                      // Default constructor
    {
        // Initialization code
    }

    // Parameterized constructor
    MyClass(int value) 
    {
        // Initialization code using the provided value
    }

    // Copy constructor
    MyClass(const MyClass& other)
    {
        // Copy the state of 'other' to the current object
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept 
    {
        // Move the state of 'other' to the current object
    }
};

int main() {
    // Creating objects using constructors
    MyClass obj1;            // Calls the default constructor
    MyClass obj2(42);        // Calls the parameterized constructor
    MyClass obj3 = obj1;     // Calls the copy constructor
    MyClass obj4 = MyClass(); // Also calls the default constructor
    MyClass obj5 = std::move(obj3); // Calls the move constructor

    return 0;
}
