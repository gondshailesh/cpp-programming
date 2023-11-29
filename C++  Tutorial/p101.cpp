// largest & smallest number in an array of size 'n' 
// using pointer to array
// largest and smallest among five numbers
#include<iostream>
using namespace std;

void doWork(int *arr, int n, int *largest, int *smallest)
{ 
    *largest = *smallest = *(arr + 0);

    for(int i = 0; i<n; i++)
    {
        if( *(arr + i) > *largest)
        {
            *largest = *(arr + i);
        }
        if( *(arr + i) < *smallest)
        {
            *smallest = *(arr + i);
        }
    }
}

int main()
{  
    int n;
    cout<<"\nEnter array size : ";
    cin>>n;
    int arr[n], largest, smallest;

    //input
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>arr[i];
    }

    doWork(arr, n, &largest, &smallest);

    cout<<"\nLargest = "<<largest<<endl;
    cout<<"Smallest = "<<smallest<<endl;

    return 0;
}