#include<iostream>
using namespace std;

int main()
{
    float fuel, costPerLiter, serviceCharge;
    float totalCost;

    cout << "Enter Fuel Consumed (liters): ";
    cin >> fuel;
    cout << "Enter Cost Per Liter: ";
    cin >> costPerLiter;
    cout << "Enter Extra Service Charge: ";
    cin >> serviceCharge;

    totalCost = (fuel * costPerLiter) + serviceCharge;

    cout << "Total Fuel Cost: " << totalCost << endl;

    if(totalCost > 3000)
    {
        cout << "Fuel Cost is High" << endl;
    }

    return 0;
}
