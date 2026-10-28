#include<iostream>
using namespace std;

int main()
{
    float pkr, usdRate, eurRate;
    float usd, eur;

    cout<<"Enter Amount in PKR: ";
    cin>>pkr;

    cout<<"Enter USD Rate: ";
    cin>>usdRate;

    cout<<"Enter EUR Rate: ";
    cin>>eurRate;

    usd = pkr / usdRate;
    eur = pkr / eurRate;

    cout<<"Amount in USD = "<<usd<<endl;
    cout<<"Amount in EUR = "<<eur;

    return 0;
}
