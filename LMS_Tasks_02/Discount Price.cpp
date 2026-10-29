#include<iostream>
using namespace std;

int main()
{
    float price, discountPercent;
    float discount, finalPrice;

    cout<<"Enter Original Price: ";
    cin>>price;

    cout<<"Enter Discount Percentage: ";
    cin>>discountPercent;

    discount = price * discountPercent / 100;
    finalPrice = price - discount;

    cout<<"Discount Amount = "<<discount<<endl;
    cout<<"Final Price = "<<finalPrice;

    return 0;
}
