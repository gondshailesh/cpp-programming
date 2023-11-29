// Calculating simple intrest
#include<iostream>
using namespace std;

int main()
{
    float Si, p, roi, t, tot;
    cout<<"Enter principle : ";
    cin>>p;
    cout<<"Enter rate of intrest : ";
    cin>>roi;
    cout<<"Enter tenure : ";
    cin>>t;

    Si = (p * roi * t)/100;
    tot = p + Si;

    cout<<"Total amount payable : "<<tot<<endl;

    return 0;
}