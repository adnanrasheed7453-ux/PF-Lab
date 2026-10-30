#include<iostream>
using namespace std;

int main()
{
    float packageCost, additionalCharges;
    float totalBill;

    cout<<"Enter Package Cost: ";
    cin>>packageCost;

    cout<<"Enter Additional Charges: ";
    cin>>additionalCharges;

    totalBill = packageCost + additionalCharges;

    cout<<"Total Bill = "<<totalBill;

    return 0;
}
