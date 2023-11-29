// An array is sequential collection of homogeneous data elements (Same data_type)
// Array is a linear static data structure

// array is simplest type of data structure
// 1st index of an array is pointer (it may start with 0 OR 1)  i.e  0-based / 1-based indexing

// Array as pointer - traversing an array

// ==== IMPORTANT ==== //

// 1st index of an array is a pointer

#include<iostream>
using namespace std;

int main()
{  
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];

    int *ptr = arr;

    // input
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>*(ptr + i);
    }
     
    cout<<endl; 
    
    // output
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cout<< *(ptr + i)<<endl;;
    }

    return 0;
}
