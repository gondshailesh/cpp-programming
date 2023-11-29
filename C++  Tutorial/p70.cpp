// Fibonacci sequence upto 'nth' term using loop and array pointer notation
#include<iostream>
using namespace std;

void printFib(int *fib, int n)
{
    int i;
    for(i = 2; i<=n; i++)
    {
        *(fib + i) = *(fib + i - 2) + *(fib + i - 1);
        cout<< *(fib + i) <<"\t";
    }
}

int main()
{
    int n;
    cout<<"Enter nth term : ";
    cin>>n;
    int arr[n];

    arr[0] = 0;
    arr[1] = 1;

    cout<<arr[0]<<"\t"<<arr[1]<<"\t";

    printFib(arr, n);

    return 0;
}