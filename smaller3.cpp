#include <iostream>

int main()
{
    int min, num1, num2, num3;
    std::cout
        << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num2;
    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        min = num2;
    }
    else if (num3 <= num1 && num3 <= num2)
    {
        min = num3;
    }
    std::cout << "The smaller number is: " << min << std::endl;
}