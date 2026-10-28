#include<iostream>
using namespace std;

int main()
{
    float openingBalance, deposit, withdraw;
    float finalBalance;

    cout<<"Enter Opening Balance: ";
    cin>>openingBalance;

    cout<<"Enter Deposited Amount: ";
    cin>>deposit;

    cout<<"Enter Withdrawn Amount: ";
    cin>>withdraw;

    finalBalance = openingBalance + deposit - withdraw;

    cout<<"Final Balance = "<<finalBalance;

    return 0;
}
