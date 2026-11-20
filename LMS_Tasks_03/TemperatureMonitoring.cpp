#include<iostream>
using namespace std;

int main()
{
    float morning, afternoon, evening;
    float average;

    cout << "Enter Morning Temperature: ";
    cin >> morning;
    cout << "Enter Afternoon Temperature: ";
    cin >> afternoon;
    cout << "Enter Evening Temperature: ";
    cin >> evening;

    average = (morning + afternoon + evening) / 3;

    cout << "Average Temperature: " << average << endl;

    if(average > 40)
    {
        cout << "High Temperature Warning" << endl;
    }

    return 0;
}
