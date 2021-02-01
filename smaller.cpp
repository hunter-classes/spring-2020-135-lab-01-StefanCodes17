#include <iostream>

int main()
{
    int num1, num2, smaller;
    std::cout
        << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    if (num1 < num2)
    {
        smaller = num1;
    }
    else
    {
        smaller = num2;
    }
    std::cout << "The smaller number is: " << smaller << std::endl;
}