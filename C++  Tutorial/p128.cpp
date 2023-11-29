// program to reverse first and last value in given array
#include<iostream>
using namespace std;

int main()
{  
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];

    //input
    cout<<"enter numbers : ";
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int temp;
    temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;

    //output
    cout<<"result : ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}