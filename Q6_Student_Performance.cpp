#include<iostream>
using namespace std;

int main()
{
    float programming, database, networking;
    float total, percentage;

    cout << "Enter Marks of Programming: ";
    cin >> programming;
    cout << "Enter Marks of Database: ";
    cin >> database;
    cout << "Enter Marks of Networking: ";
    cin >> networking;

    total = programming + database + networking;
    percentage = total / 300 * 100;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if(percentage >= 70)
    {
        cout << "Excellent Performance" << endl;
    }

    return 0;
}
