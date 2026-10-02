#include<iostream>
using namespace std;

int main()
{
    float item1, item2, item3;
    float totalCost;

    cout << "Enter Price of Item 1: ";
    cin >> item1;
    cout << "Enter Price of Item 2: ";
    cin >> item2;
    cout << "Enter Price of Item 3: ";
    cin >> item3;

    totalCost = item1 + item2 + item3;

    cout << "Total Cost: " << totalCost << endl;

    if(totalCost > 5000)
    {
        cout << "High Purchase Amount" << endl;
    }

    return 0;
}
