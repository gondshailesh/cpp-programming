// power of a number
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num, power;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Enter power : ";
    cin>>power;

    cout<<num<<" to the power "<<power<<" is "<<pow(num, power);

    return 0;
}