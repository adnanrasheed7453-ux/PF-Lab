#include<iostream>
using namespace std;

int main()
{
    int subjects;
    float feePerSubject, totalFee;

    cout<<"Enter Number of Subjects: ";
    cin>>subjects;

    cout<<"Enter Fee Per Subject: ";
    cin>>feePerSubject;

    totalFee = subjects * feePerSubject;

    cout<<"Total Fee = "<<totalFee;

    return 0;
}
