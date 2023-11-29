 // program to store random numbers in memory using array and print prime numbers of them
#include<iostream>
using namespace std;

void storeArray(int *arr, int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        cin>>*(arr + i);
    }
}

void printArray(int *arr, int n)
{
    int i, j, prime;
    for(i = 0; i<n; i++)
    {
        prime = 1;
        for(j = 2; j < *(arr+i); j++)
        {
            if(*(arr+i) % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if(*(arr+i) == 1)
        {
            continue;
        }
        else if(prime)
        {
            cout<<*(arr+i)<<"\t";
        }
    }
}

int main()
{  
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int numbers[n];
    
    cout<<"enter numbers : ";
    storeArray(numbers, n);
    cout<<"prime numbers : ";
    printArray(numbers, n);

    return 0;
}