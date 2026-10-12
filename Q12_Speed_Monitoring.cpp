#include<iostream>
using namespace std;

int main()
{
    float distance, time, serviceCharge;
    float speed, fine;

    cout << "Enter Distance Traveled (km): ";
    cin >> distance;
    cout << "Enter Time Taken (hours): ";
    cin >> time;
    cout << "Enter Service Charge: ";
    cin >> serviceCharge;

    speed = distance / time;

    cout << "Speed: " << speed << " km/h" << endl;

    if(speed > 80)
    {
        fine = speed * 10;
        cout << "Fine Amount: " << fine << endl;
    }

    return 0;
}
