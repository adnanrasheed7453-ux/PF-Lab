#include<iostream>
using namespace std;

int main()
{
    int lateDays;
    float finePerDay, totalFine;

    cout<<"Enter Late Days: ";
    cin>>lateDays;

    cout<<"Enter Fine Per Day: ";
    cin>>finePerDay;

    totalFine = lateDays * finePerDay;

    cout<<"Total Fine = "<<totalFine;

    return 0;
}
