// Inserting an element at end of array by copying method

#include<iostream>
using namespace std;

int main()
{  
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];

    // input
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>arr[i];
    }

    // inserting ele at end of array by copying
    arr[n] = arr[n-1];
    int val;
    cout<<"enter value to insert : ";
    cin>>val;
    arr[n-1] = val;
    n++;

    // display
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cout<<arr[i]<<endl;
    }

    return 0;
}