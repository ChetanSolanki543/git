//prg to print sum of first 10 natural numbers usin while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1,sum = 0;
    while (i<=10)
    {
        sum += i; 
        i++;
    }
        cout << "The sum of the first 10 natural numbers is: " << sum <<endl;
    return 0;
} 