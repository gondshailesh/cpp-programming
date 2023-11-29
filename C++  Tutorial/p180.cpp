// Inserting two elements randomly in an array
#include<iostream>
using namespace std;

int main()
{  
    int n, k1, k2, val1, val2;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];
    int *ptr = arr;

    //input
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>*(ptr+i);
    }

    // insert first element
    cout<<"enter an index to insert : ";
    cin>>k1;
    cout<<"enter value to insert : ";
    cin>>val1;
    for(int i = n; i>=k1; i--)
    {
        *(ptr+i) = *(ptr+i-1);
    }
    *(ptr+k1) = val1;
    n = n + 1;

    // insert second element
    cout<<"enter another index to insert : ";
    cin>>k2;
    cout<<"enter value to insert : ";
    cin>>val2;
    for(int i = n; i>=k2; i--)
    {
        *(ptr+i) = *(ptr+i-1);
    }
    *(ptr+k2) = val2;
    n = n + 1;

    // display
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cout<<*(ptr+i)<<endl;
    }

    return 0;
}