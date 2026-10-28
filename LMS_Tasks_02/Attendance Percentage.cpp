#include<iostream>
using namespace std;

int main()
{
    float totalClasses, attendedClasses;
    float percentage;

    cout<<"Enter Total Classes: ";
    cin>>totalClasses;

    cout<<"Enter Attended Classes: ";
    cin>>attendedClasses;

    percentage = (attendedClasses / totalClasses) * 100;

    cout<<"Attendance Percentage = "<<percentage<<"%";

    return 0;
}
