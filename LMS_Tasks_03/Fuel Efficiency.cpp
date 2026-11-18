#include<iostream>
using namespace std;

int main()
{
    float distance, fuelConsumed, maintenanceCharge;
    float avgEfficiency, totalCost;

    cout << "Enter Distance Traveled (km): ";
    cin >> distance;
    cout << "Enter Fuel Consumed (liters): ";
    cin >> fuelConsumed;
    cout << "Enter Maintenance Charge: ";
    cin >> maintenanceCharge;

    avgEfficiency = distance / fuelConsumed;
    totalCost = (fuelConsumed * 100) + maintenanceCharge;

    cout << "Average Fuel Efficiency: " << avgEfficiency << " km/liter" << endl;
    cout << "Total Cost: " << totalCost << endl;

    if(avgEfficiency < 12)
    {
        cout << "Low Fuel Efficiency Warning" << endl;
    }

    return 0;
}
