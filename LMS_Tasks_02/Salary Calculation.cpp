#include<iostream>
using namespace std;

int main()
{
    float basicSalary, houseRent, medical, taxPercent;
    float grossSalary, tax, netSalary;

    cout<<"Enter Basic Salary: ";
    cin>>basicSalary;

    cout<<"Enter House Rent: ";
    cin>>houseRent;

    cout<<"Enter Medical Allowance: ";
    cin>>medical;

    cout<<"Enter Tax Percentage: ";
    cin>>taxPercent;

    grossSalary = basicSalary + houseRent + medical;
    tax = grossSalary * taxPercent / 100;
    netSalary = grossSalary - tax;

    cout<<"Gross Salary = "<<grossSalary<<endl;
    cout<<"Tax = "<<tax<<endl;
    cout<<"Net Salary = "<<netSalary;

    return 0;
}
