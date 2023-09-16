#include <iostream>

int main() 
{    
    const int SIZE = 5;    // Define the size of the array                  
    int numbers[SIZE];    // Declare an array of integers (in bracket we declare the size of array)
                         // this array will store five values

    // Read numbers from the user and store them in the array   
    std::cout << "Enter " << SIZE << " numbers:\n";

    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << "Number " << (i + 1) << ": ";
        std::cin >> numbers[i];
    }

    // Display the numbers in reverse order
    std::cout << "\nNumbers in reverse order:\n";
    for (int i = SIZE-1 ; i >= 0; --i)
    {
        std::cout << numbers[i] << " ";
    }
    
    return 0;
}
