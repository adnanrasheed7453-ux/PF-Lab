#include<iostream>
using namespace std;

int main()
{
    float loanAmount, processingFee;
    float interest, totalPayable, penalty, discount;

    cout << "Enter Loan Amount: ";
    cin >> loanAmount;
    cout << "Enter Processing Fee: ";
    cin >> processingFee;

    interest = loanAmount * 8 / 100;
    totalPayable = loanAmount + interest + processingFee;

    cout << "Interest Amount: " << interest << endl;
    cout << "Total Payable Amount: " << totalPayable << endl;

    if(totalPayable > 100000)
    {
        penalty = totalPayable * 2 / 100;
        totalPayable = totalPayable + penalty;
        cout << "Penalty (2%): " << penalty << endl;
        cout << "Final Payable Amount: " << totalPayable << endl;
    }
    else
    {
        discount = totalPayable * 1 / 100;
        totalPayable = totalPayable - discount;
        cout << "Discount (1%): " << discount << endl;
        cout << "Final Payable Amount: " << totalPayable << endl;
    }

    return 0;
}
