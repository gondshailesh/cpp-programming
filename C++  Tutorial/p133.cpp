// program to print largest & smallest among numbers in an array
#include<iostream>
using namespace std;

void storeArray(int *arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>*(arr+i);
    }
}

void printArray(int *arr, int n)
{
    int largest, smallest;
    largest = smallest = *(arr + 0);

    for(int i = 0; i<n; i++)
    {
        if(*(arr+i) > largest)
        {
            largest = *(arr+i);
        }
        if(*(arr+i) < smallest)
        {
            smallest = *(arr+i);
        }
    }
    cout<<"largest : "<<largest<<endl;    
    cout<<"smallest : "<<smallest<<endl;    
}

int main()
{  
    int n;
    cout<<"enter array size : ";
    cin>>n;

    int arr[n];

    cout<<"enter values : \n";
    storeArray(arr, n);
    printArray(arr, n);

    return 0;
}