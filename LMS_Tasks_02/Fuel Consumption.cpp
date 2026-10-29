#include<iostream>
using namespace std;

int main()
{
    float distance, fuel, average;

    cout<<"Enter Distance Travelled: ";
    cin>>distance;

    cout<<"Enter Fuel Consumed: ";
    cin>>fuel;

    average = distance / fuel;

    cout<<"Average Fuel Consumption = "<<average;

    return 0;
}
