#include<iostream>
using namespace std;

int main()
{
    float distance, farePerKm, tollTax;
    float totalFare;

    cout << "Enter Distance Traveled (km): ";
    cin >> distance;
    cout << "Enter Fare Per Kilometer: ";
    cin >> farePerKm;
    cout << "Enter Toll Tax: ";
    cin >> tollTax;

    totalFare = (distance * farePerKm) + tollTax;

    cout << "Total Fare: " << totalFare << endl;

    if(totalFare > 4000)
    {
        cout << "High Travel Cost" << endl;
    }

    return 0;
}
