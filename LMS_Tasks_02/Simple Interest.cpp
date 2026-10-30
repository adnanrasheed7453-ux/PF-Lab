#include<iostream>
using namespace std;

int main()
{
    float principal, rate, time;
    float interest, totalAmount;

    cout<<"Enter Principal Amount: ";
    cin>>principal;

    cout<<"Enter Rate: ";
    cin>>rate;

    cout<<"Enter Time: ";
    cin>>time;

    interest = (principal * rate * time) / 100;
    totalAmount = principal + interest;

    cout<<"Simple Interest = "<<interest<<endl;
    cout<<"Total Amount = "<<totalAmount;

    return 0;
}
