#include<iostream>
using namespace std;

int main()
{
    float mealCost, taxPercent;
    float totalBill;

    cout<<"Enter Meal Cost: ";
    cin>>mealCost;

    cout<<"Enter Tax Percentage: ";
    cin>>taxPercent;

    totalBill = mealCost + (mealCost * taxPercent / 100);

    cout<<"Total Bill = "<<totalBill;

    return 0;
}
