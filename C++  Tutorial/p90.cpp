// program to reverse an array
// standard method (n-i-1) - i is index
// travel upto n/2

#include<iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int temp;
    for(int i = 0; i <= n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main()
{
    int n;
    cout<<"\nEnter array size : ";
    cin>>n;

    int num[n];

    // input
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>num[i];
    }
    
    cout<<endl;
    reverseArray(num, n);
    cout<<endl;

    // print
    cout<<"==== Reverse array ===="<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cout<<num[i]<<endl;
    }

    return 0;
}