// deleting OR removing an element from array
#include<iostream>
using namespace std;

int main()
{  
    int size;
    cout<<"enter array size : ";
    cin>>size;
    int arr[size];
    int *ptr = arr;

    // input
    for(int i = 0; i<size; i++)
    {
        cout<<i<<" index : ";
        cin>>*(ptr+i);
    }

    // delete
    int pos;
    cout<<"enter element position to delete : ";
    cin>>pos;

    for(int i = pos-1; i<size; i++)
    {
        *(ptr+i) = *(ptr+i+1);
    }
    size--;

    // display
    for(int i = 0; i<size; i++)
    {
        cout<<i<<" index : ";
        cout<<arr[i]<<endl;
    }

    return 0;
}