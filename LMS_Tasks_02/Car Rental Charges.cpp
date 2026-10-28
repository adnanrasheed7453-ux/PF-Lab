#include<iostream>
using namespace std;

int main()
{
    int days;
    float rentPerDay, totalCost;

    cout<<"Enter Rental Days: ";
    cin>>days;

    cout<<"Enter Rent Per Day: ";
    cin>>rentPerDay;

    totalCost = days * rentPerDay;

    cout<<"Total Rental Cost = "<<totalCost;

    return 0;
}
