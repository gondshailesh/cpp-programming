// Calculating compound intrest
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float ci, p, r, t, tot;
    cout<<"Enter principle : ";
    cin>>p;
    cout<<"Enter Rate of Intrest : ";
    cin>>r;
    cout<<"Enter tenure : ";
    cin>>t;

    ci = p * pow(1 + (r/100), t);
    tot = p + ci;

    cout<<"Compound Intrest : "<<ci<<endl;
    cout<<"Total payable : "<<tot<<endl;

    return 0;
}