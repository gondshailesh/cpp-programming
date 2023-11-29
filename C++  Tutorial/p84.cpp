// array as pointer - traverse an array
#include<iostream>
using namespace std;

int main()
{  
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    
    const int size = n;

    int arr[size];

    // input
    for(int i = 0; i<size; i++)
    {
        cout<<i<<" index : ";
        cin>>arr[i];
    }

    cout<<endl;

    // output
    for(int i = 0; i<size; i++)
    {
        cout<<i<<" index : ";
        cout<<arr[i]<<endl;
    }

    return 0;
}
