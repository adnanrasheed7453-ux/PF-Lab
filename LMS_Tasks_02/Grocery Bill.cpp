#include<iostream>
using namespace std;

int main()
{
    float price, totalBill;
    int quantity;

    cout<<"Enter Price: ";
    cin>>price;

    cout<<"Enter Quantity: ";
    cin>>quantity;

    totalBill = price * quantity;

    cout<<"Total Bill = "<<totalBill;

    return 0;
}
