#include<iostream>
using namespace std;

int main()
{
    float distance, farePerKm, tollTax;
    float totalFare, discount;

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
        discount = totalFare * 7 / 100;
        cout << "Discount Amount: " << discount << endl;
        cout << "Fare After Discount: " << totalFare - discount << endl;
    }
    else
    {
        cout << "No Discount Applied" << endl;
    }

    return 0;
}
