// sum of digits of a four digit number 
#include<iostream>
using namespace std;

int main()
{
    int n, d1, d2, d3, d4, sum = 0;
    cout<<"Enter a four digit number : ";
    cin>>n;

    d1 = n % 10;
    sum = sum + d1;
    n = n / 10;

    d2 = n % 10;
    sum = sum + d2;
    n = n / 10;

    d3 = n % 10;
    sum = sum + d3;
    n = n / 10;

    d4 = n % 10;
    sum = sum + d4;

    cout<<"Sum of digits = "<<sum<<endl;

    return 0;
}