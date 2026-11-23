#include<iostream>
using namespace std;

int main()
{
    float price, quantity, delivery;
    float totalCost, discount;

    cout << "Enter Price of Item: ";
    cin >> price;
    cout << "Enter Quantity Purchased: ";
    cin >> quantity;
    cout << "Enter Delivery Charges: ";
    cin >> delivery;

    totalCost = (price * quantity) + delivery;

    cout << "Total Cost: " << totalCost << endl;

    if(totalCost > 5000)
    {
        discount = totalCost * 5 / 100;
        cout << "Discount Amount: " << discount << endl;
        cout << "Amount After Discount: " << totalCost - discount << endl;
    }
    else
    {
        cout << "No Discount Applied" << endl;
    }

    return 0;
}
