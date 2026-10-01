#include<iostream>
using namespace std;

int main()
{
    float english, math, science;
    float total, percentage;

    cout << "Enter Marks of English: ";
    cin >> english;
    cout << "Enter Marks of Mathematics: ";
    cin >> math;
    cout << "Enter Marks of Science: ";
    cin >> science;

    total = english + math + science;
    percentage = total / 300 * 100;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if(percentage >= 50)
    {
        cout << "Student Passed" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }

    return 0;
}
