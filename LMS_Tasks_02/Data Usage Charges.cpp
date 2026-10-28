#include<iostream>
using namespace std;

int main()
{
    float dataUsed, costPerGB, bill;

    cout<<"Enter Data Used (GB): ";
    cin>>dataUsed;

    cout<<"Enter Cost Per GB: ";
    cin>>costPerGB;

    bill = dataUsed * costPerGB;

    cout<<"Data Bill = "<<bill;

    return 0;
}
