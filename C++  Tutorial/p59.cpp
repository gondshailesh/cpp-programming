// function to calc sum by call by reference
#include<iostream>
using namespace std;

int calcSum(int &, int &);

int main()
{
    int n1, n2;  
    cout<<"Enter num 1 : ";
    cin>>n1;
    cout<<"Enter num 2 : ";
    cin>>n2;

    cout<<"num 1 = "<<n1<<" & num 2 = "<<n2<<endl;

    cout<<"sum = "<<calcSum(n1, n2);

    cout<<"\nnum 1 = "<<n1<<" & num 2 = "<<n2<<endl;

    return 0;
}

int calcSum(int &a, int &b)
{
    a = 10;
    b = 10;
    int sum = a + b;
    return sum;
}