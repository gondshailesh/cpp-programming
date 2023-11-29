// Inserting two elements at the end of an array
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

    // insert elements
    cout<<"insert elements : ";
    for(int i = n; i<=n+1; i++)
    {
        cin>>arr[i];
    }
    n += 2;

    // display
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cout<<arr[i]<<endl;
    }

    return 0;
}