#include<iostream>
using namespace std;

int main()
{
    float units, costPerUnit, meterRent;
    float bill;

    cout << "Enter Units Consumed: ";
    cin >> units;
    cout << "Enter Cost Per Unit: ";
    cin >> costPerUnit;
    cout << "Enter Meter Rent: ";
    cin >> meterRent;

    bill = (units * costPerUnit) + meterRent;

    cout << "Bill Amount: " << bill << endl;

    if(bill > 6000)
    {
        bill = bill + 500;
        cout << "Extra Charges Added: 500" << endl;
        cout << "Final Bill Amount: " << bill << endl;
    }
    else
    {
        cout << "Final Bill Amount: " << bill << endl;
    }

    return 0;
}
