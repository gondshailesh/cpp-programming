//  program to store random numbers in memory using array and print only armstrong numbers from them
// use array pointer (points to first index of array)
#include<iostream>
#include<cmath>
using namespace std;

void storeArray(int *arr, int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>*(arr+i);
    }
}

void printArray(int *arr, int n)
{
    int temp, count, sum;
    for(int i = 0; i<n; i++)
    {
        //count digits
        temp = *(arr+i);
        count = 0;
        while(temp > 0)
        {
            temp = temp/10;
            count++;
        }

        temp = *(arr+i);

        //sum
        sum = 0;
        sum = pow((temp % 10), count)+
              pow(((temp % 100 - temp % 10)/10), count)+
              pow(((temp % 1000 - temp % 100)/100), count)+
              pow(((temp % 10000 - temp % 1000)/1000), count);

        if(sum == *(arr+i))      
        {
            cout<<*(arr+i)<<endl;
        }
    }
}

int main()
{  
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];

    storeArray(arr, n);
    cout<<"armstrong numbers : \n";
    printArray(arr, n);

    return 0;
}