// program 
// add 1 point for each even number in an array
// add 3 point for each odd number in an array
// add 5 point for every time you encounter 5 in an array
#include<iostream>
using namespace std;

void doWork(int *arr, int n, int *addEven, int *addOdd, int *addTimes)
{
    *addEven = *addOdd = *addTimes = 0;
    for(int i = 0; i<n; i++)
    {
        if(*(arr+i) % 2 == 0)
        {
            *addEven += 1;
        }
        if(*(arr+i) % 2 != 0)
        {
            *addOdd += 3;
        }
        if(*(arr+i) == 5)
        {
            *addTimes += 5;
        }
    }
}

int main()
{  
    int n, addEven, addOdd, addTimes;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];

    //input
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>arr[i];
    }

    // call
    doWork(arr, n, &addEven, &addOdd, &addTimes);

    cout<<"even : "<<addEven<<endl;
    cout<<"odd : "<<addOdd<<endl;
    cout<<"times : "<<addTimes<<endl;

    return 0;
}