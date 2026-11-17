#include<iostream>
using namespace std;

int main()
{
    float basic, houseRent, medical;
    float totalSalary, bonus;

    cout << "Enter Basic Salary: ";
    cin >> basic;
    cout << "Enter House Rent Allowance: ";
    cin >> houseRent;
    cout << "Enter Medical Allowance: ";
    cin >> medical;

    totalSalary = basic + houseRent + medical;

    cout << "Total Salary: " << totalSalary << endl;

    if(totalSalary > 40000)
    {
        bonus = totalSalary * 10 / 100;
        cout << "Bonus Amount: " << bonus << endl;
    }

    return 0;
}
