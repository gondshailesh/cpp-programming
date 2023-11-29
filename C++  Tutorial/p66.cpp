// celcius to farahenite conversion using function
#include<iostream>
using namespace std;

float convertTemp(float cel)
{
    return (cel * 1.8) + 32 ;
}

int main()
{
    float cel;  
    cout<<"Enter temp in celcius : ";
    cin>>cel;

    cout<<"temp in far = "<<convertTemp(cel)<<"F"<<endl;

    return 0;
}