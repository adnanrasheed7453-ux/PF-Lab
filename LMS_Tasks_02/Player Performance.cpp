#include<iostream>
using namespace std;

int main()
{
    float s1, s2, s3;
    float total, average;

    cout<<"Enter Scores of 3 Matches: ";
    cin>>s1>>s2>>s3;

    total = s1 + s2 + s3;
    average = total / 3;

    cout<<"Total Score = "<<total<<endl;
    cout<<"Average Score = "<<average;

    return 0;
}
