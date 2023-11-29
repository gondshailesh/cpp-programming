// reverse table
#include<iostream>
using namespace std;

int main()
{
    int i, n;
    cout<<"Enter a number : "  ;
    cin>>n;

    for(i = 10; i >= 1; i--)
    {
        cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    }

    return 0;
}