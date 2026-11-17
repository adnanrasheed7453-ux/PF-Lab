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

    cout << "Electricity Bill: " << bill << endl;

    if(bill > 6000)
    {
        cout << "High Electricity Bill" << endl;
    }

    return 0;
}
