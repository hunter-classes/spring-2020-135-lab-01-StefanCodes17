#include <iostream>
using namespace std;

int isLeapYear(int year)
{
    //Returns 0 if it's a common year and 1 if it's a leap year
    if (year % 4 != 0)
    {
        return 0;
    }
    else if (year % 100 != 0)
    {
        return 1;
    }
    else if (year % 400 != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    return -1;
};

int main()
{
    int month, year;
    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter a month: ";
    cin >> month;
    if (isLeapYear(year) == 1 && month == 2)
    {
        cout << "29";
    }
    else if (month == 2)
    {
        cout << "28";
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        cout << "31";
    }
    else
    {
        cout << "30";
    }
}
