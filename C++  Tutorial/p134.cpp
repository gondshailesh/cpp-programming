//store a table of number and fibonacci seq.. using 2D array
#include<iostream>
using namespace std;

void storeTable(int arr[][10], int m, int n, int num)
{
    for(int i = 0; i<n; i++)
    {
        arr[m][i] = num*(i+1);
    }
}

void storeFib(int arr[][10], int m, int n)
{
    for(int i = 2; i<n; i++)
    {
        arr[m][i] = arr[m][i-2] + arr[m][i-1];
    }
}

int main()
{  
    int arr[2][10]; // 2d array
    int number;
    cout<<"enter a number : ";
    cin>>number;

    arr[1][0] = 0;
    arr[1][1] = 1;

    storeTable(arr, 0, 10, number);
    storeFib(arr, 1, 10);

    //print
    cout<<"table : ";
    for(int i = 0; i<10; i++)
    {
        arr[0][i] = number*(i+1);
        cout<<arr[0][i]<<" ";
    }

    cout<<endl;
    cout<<"Fib seq : ";
    cout<<arr[1][0]<<" "<<arr[1][1]<<" ";

    for(int i = 2; i<10; i++)
    {
        arr[1][i] = arr[1][i-2] + arr[1][i-1];
        cout<<arr[1][i]<<" ";
    }

    return 0;
}
