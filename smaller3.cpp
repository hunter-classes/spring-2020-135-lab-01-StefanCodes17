#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    int num1, num2, num3, min;
    //User input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    min = num1;
    //Logic
    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    //Output
    cout << "The smaller of the three is " << min;
    return 0;
}