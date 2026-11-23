#include<iostream>
using namespace std;

int main()
{
    float item1, item2, item3;
    float totalCost, serviceCharge, extraCharge, discount, finalCost;

    cout << "Enter Price of Item 1: ";
    cin >> item1;
    cout << "Enter Price of Item 2: ";
    cin >> item2;
    cout << "Enter Price of Item 3: ";
    cin >> item3;

    totalCost = item1 + item2 + item3;
    serviceCharge = totalCost * 3 / 100;

    cout << "Total Cost: " << totalCost << endl;
    cout << "Service Charge (3%): " << serviceCharge << endl;

    if(totalCost > 12000)
    {
        extraCharge = totalCost * 2 / 100;
        finalCost = totalCost + serviceCharge + extraCharge;
        cout << "Extra Charges (2%): " << extraCharge << endl;
        cout << "Final Cost: " << finalCost << endl;
    }
    else
    {
        discount = totalCost * 2 / 100;
        finalCost = totalCost + serviceCharge - discount;
        cout << "Discount (2%): " << discount << endl;
        cout << "Final Cost: " << finalCost << endl;
    }

    return 0;
}
