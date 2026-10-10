#include<iostream>
using namespace std;

int main()
{
    float loanAmount, rateOfInterest, processingFee;
    float interest, totalPayable;

    cout << "Enter Loan Amount: ";
    cin >> loanAmount;
    cout << "Enter Rate of Interest (%): ";
    cin >> rateOfInterest;
    cout << "Enter Processing Fee: ";
    cin >> processingFee;

    interest = loanAmount * rateOfInterest / 100;
    totalPayable = loanAmount + interest + processingFee;

    cout << "Interest Amount: " << interest << endl;
    cout << "Total Payable Amount: " << totalPayable << endl;

    if(interest > 8000)
    {
        cout << "High Interest Amount" << endl;
    }

    return 0;
}
