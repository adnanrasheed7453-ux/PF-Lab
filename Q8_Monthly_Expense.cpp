#include<iostream>
using namespace std;

int main()
{
    float roomRent, food, utility;
    float totalExpenses;

    cout << "Enter Room Rent: ";
    cin >> roomRent;
    cout << "Enter Food Charges: ";
    cin >> food;
    cout << "Enter Utility Charges: ";
    cin >> utility;

    totalExpenses = roomRent + food + utility;

    cout << "Total Monthly Expenses: " << totalExpenses << endl;

    if(totalExpenses > 25000)
    {
        cout << "High Monthly Expense" << endl;
    }

    return 0;
}
