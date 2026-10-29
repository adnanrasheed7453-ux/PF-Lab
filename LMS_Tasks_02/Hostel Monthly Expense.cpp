#include<iostream>
using namespace std;

int main()
{
    float roomRent, foodCharges, utilityCharges;
    float totalExpense;

    cout<<"Enter Room Rent: ";
    cin>>roomRent;

    cout<<"Enter Food Charges: ";
    cin>>foodCharges;

    cout<<"Enter Utility Charges: ";
    cin>>utilityCharges;

    totalExpense = roomRent + foodCharges + utilityCharges;

    cout<<"Total Monthly Expense = "<<totalExpense;

    return 0;
}
