#include<iostream>
using namespace std;

int main()
{
    float units, costPerUnit, bill;

    cout<<"Enter Units Consumed: ";
    cin>>units;

    cout<<"Enter Cost Per Unit: ";
    cin>>costPerUnit;

    bill = units * costPerUnit;

    cout<<"Electricity Bill = "<<bill;

    return 0;
}
