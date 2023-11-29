// array to store sequence of 'n' fibonacci numbers
// fibonacci sequence using loop
// call by address
#include<iostream>
using namespace std;

void storeFib(int *arr, int n)
{
    for(int i = 2; i<n; i++)
    {
        *(arr + i) = *(arr + i - 2) + *(arr + i - 1);
    }
}

void printFib(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
{  
    int n;
    cout<<"\nEnter array size : ";
    cin>>n;
    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    storeFib(fib, n);
    cout<<"\n";
    printFib(fib, n);
 
    return 0;
}