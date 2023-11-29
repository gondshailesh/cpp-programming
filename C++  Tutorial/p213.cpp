// linear search in an array
// 7, 38, 28, 92, 17
// search for 92
#include<iostream>
using namespace std;

int main()
{
    int n, k, item, lb = 0, ub, loc;

    cout<<"\nEnter no. of elements in array : ";
    cin>>n;
    
    int data[n];
    ub = n-1;
    
    cout<<"\n";
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>data[i];
    }

    cout<<"\nEnter element to search : ";
    cin>>item;


    for(k = lb; k <= ub; k++)
    {
        if(data[k] == item)
        { 
             loc = k;
             cout<<"Location = "<<loc<<"\n\n";
             break;
        }
    }

    if(loc != k) 
    {
        cout<<"Element is not present\n\n";
    }

    return 0;
}