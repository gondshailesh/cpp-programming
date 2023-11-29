// program to print x1/1! + x2/2! + .... + xm/m!
#include<iostream>
#include<cmath>
using namespace std;

int main()
{  
    int x, i, m, fact = 1, sum = 0;
    cout<<"enter a number : ";
    cin>>x;
    cout<<"enter last term : ";
    cin>>m;
    for(i = 1; i<=m; i++)
    {
        fact = fact * i;
        sum = sum + (int)pow(x, i)/fact;
    }
    cout<<"sum = "<<sum;

    return 0;
}