#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    int year, month;
    //User input
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    //Logic
    if (month == 2)
    {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            cout << "29";
        }
        else
        {
            cout << "28";
        }
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