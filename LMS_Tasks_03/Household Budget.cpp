#include<iostream>
using namespace std;

int main()
{
    float food, utility, transport;
    float totalExpenses;

    cout << "Enter Food Expense: ";
    cin >> food;
    cout << "Enter Utility Expense: ";
    cin >> utility;
    cout << "Enter Transport Expense: ";
    cin >> transport;

    totalExpenses = food + utility + transport;

    cout << "Total Expenses: " << totalExpenses << endl;

    if(totalExpenses > 30000)
    {
        cout << "Budget Limit Exceeded" << endl;
    }

    return 0;
}
