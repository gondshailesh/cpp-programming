// sorting in an array
// Bubble sort(data, k, lb, ptr, temp)
// 64, 38, 2, 5, 12, 14

#include<iostream>
using namespace std;

int main()
{
    int n, k, ptr, temp;
    cout<<"\nunsorted array : \n";
    cout<<"\nEnter no. of elements : ";
    cin>>n;

    int data[n];
    cout<<"\n";
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>data[i];
    }

    // bubble sort
    for(k = 0; k < n-1; k++)
    {
        ptr = 0;
        while(ptr <= (n-2)-k)
        {
            if(data[ptr] > data[ptr+1])
            {
                temp = data[ptr];
                data[ptr] = data[ptr+1];
                data[ptr+1] = temp;
            }
            ptr++;
        }
    }

    cout<<"\nSorted array : \n\n";
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : "<<data[i]<<endl<<endl;
    }

    return 0;
}
