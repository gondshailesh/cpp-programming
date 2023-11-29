// Inserting an element in an array
#include<iostream>
using namespace std;

void insrt(int *arr, int n, int m, int count, int val)
{
    count = 0;
    for(int i = n-1; i>=m; i--)
    {
        *(arr+i+1) = *(arr+i);
    }
    *(arr+m) = val;
    n = n + 1;

    // display
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cout<<*(arr+i)<<endl;
        count++;
    }
    cout<<"new array size : "<<count;
}

int main()
{  
    int n, m, count, value;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];

    // input
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>*(arr + i);
    }

    cout<<"enter an index to insert : ";
    cin>>m;
    cout<<"enter an element to insert : ";
    cin>>value;

    insrt(arr, n, m, count, value);

    return 0;
}