#include<iostream>
using namespace std;

int main()
{
    float pricePerItem, quantity, delivery;
    float total, discount;

    cout << "Enter Price Per Item: ";
    cin >> pricePerItem;
    cout << "Enter Quantity Purchased: ";
    cin >> quantity;
    cout << "Enter Delivery Charges: ";
    cin >> delivery;

    total = (pricePerItem * quantity) + delivery;

    cout << "Total Purchase Amount: " << total << endl;

    if(total > 10000)
    {
        discount = total * 5 / 100;
        cout << "Discount Amount: " << discount << endl;
    }

    return 0;
}
