// sum of first 'n' natural numbers
#include<iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout<<"Enter a number : ";
    cin>>n;

    for(i = 1; i<=n; i++)
    {
        cout<<i<<endl;
        sum = sum + i;
    }

    cout<<"sum = "<<sum;
   
    return 0;
}