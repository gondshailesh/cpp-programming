// sorting in an array
// Selection sort(data, k, n, ptr, loc, temp, min)
// 64, 38, 2, 5, 12, 14

#include<iostream>
using namespace std;

int main()
{
    int n, k, temp, ptr, loc, min;
    cout<<"\nunsorted array : ";
    cout<<"\n\nEnter no. of elements : ";
    cin>>n;

    int data[n];
    cout<<"\n";
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>data[i];
    }

    // sorting
    
    // outer loop
    for(k = 0; k < n; k++)
    {
        min = data[k];
        loc = k;
        
        //inner loop
        for(ptr = k+1; ptr < n; ptr++)
        {
            if(data[ptr] < min)
            {
                min = data[ptr];
                loc = ptr;
            }
        }

        temp = data[k];
        data[k] = data[loc];
        data[loc] = temp;
    }

    cout<<"\nSorted array : \n\n";
    for(int i = 0; i < n; i++)
    {
        cout<<i<<" index : "<<data[i]<<endl<<"\n";
    }

    return 0;
}