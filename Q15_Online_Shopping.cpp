#include<iostream>
using namespace std;

int main()
{
    float item1, item2, item3;
    float totalCost, serviceCharge;

    cout << "Enter Price of Item 1: ";
    cin >> item1;
    cout << "Enter Price of Item 2: ";
    cin >> item2;
    cout << "Enter Price of Item 3: ";
    cin >> item3;

    totalCost = item1 + item2 + item3;

    cout << "Total Cost: " << totalCost << endl;

    if(totalCost > 12000)
    {
        serviceCharge = totalCost * 3 / 100;
        cout << "Service Charge: " << serviceCharge << endl;
    }

    return 0;
}
