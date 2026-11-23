#include<iostream>
using namespace std;

int main()
{
    float totalClasses, attended, medicalLeave;
    float attendancePercentage;

    cout << "Enter Total Classes Held: ";
    cin >> totalClasses;
    cout << "Enter Classes Attended: ";
    cin >> attended;
    cout << "Enter Medical Leave Days: ";
    cin >> medicalLeave;

    attendancePercentage = (attended + medicalLeave) / totalClasses * 100;

    cout << "Attendance Percentage: " << attendancePercentage << "%" << endl;

    if(attendancePercentage >= 75)
    {
        cout << "Eligible for Exam" << endl;
    }
    else
    {
        cout << "Not Eligible for Exam" << endl;
    }

    return 0;
}
