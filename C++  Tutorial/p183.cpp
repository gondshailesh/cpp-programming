// deleting OR removing two elements from an array
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

    //delete
    int pos1, pos2;
    cout<<"enter first position to delete : ";
    cin>>pos1;
    cout<<"enter second position to delete : ";
    cin>>pos2;

    for(int i = pos1-1; i<size; i++)
    {
        *(ptr+i) = *(ptr+i+1);
    }
    size--;

    for(int i = pos2-2; i<size; i++)
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
