// program to reverse an array using another method and pointer
#include<iostream>
using namespace std;

void storeArray(int *arr, int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>*(arr+i);
    }
}

void printArray(int *arr, int n)
{
    int i, j, temp;
    for(i = n-1, j = 0; i>=0; i--, j++)
    {
        cout<<j<<" index : ";
        cout<<*(arr+i)<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];

    storeArray(arr, n);
    cout<<"reverse array : \n";
    printArray(arr, n);

    return 0;
}