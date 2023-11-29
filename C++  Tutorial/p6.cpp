// Celcius to farahenite
#include<iostream>
using namespace std;

int main()
{
    float cel, far;
    cout<<"Enter temp in celcius : ";
    cin>>cel;

    far = cel * 1.8 + 32;

    cout<<"Temp = "<<far<<"F";

    return 0;
}