// Reverse a four digit number 
#include<iostream>
using namespace std;

int main()
{
    int n, rev = 0, d1, d2, d3, d4;

    cout<<"Enter a four digit number : ";
    cin>>n;

    d1 = n % 10;
    rev = rev + d1*1000;
    n = n / 10;

    d2 = n % 10;
    rev = rev + d2*100;
    n = n / 10;

    d3 = n % 10;
    rev = rev + d3*10;
    n = n / 10;
    
    d4 = n % 10;
    rev = rev + d4;

    cout<<"Reversed number : "<<rev<<endl;

    return 0;
}