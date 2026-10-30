#include<iostream>
using namespace std;

int main()
{
    float hours, rate;
    float salary;

    cout<<"Enter Working Hours: ";
    cin>>hours;

    cout<<"Enter Hourly Rate: ";
    cin>>rate;

    salary = hours * rate;

    cout<<"Total Salary = "<<salary;

    return 0;
}
