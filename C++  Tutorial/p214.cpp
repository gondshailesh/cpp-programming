// binary search in linear array
// divide and conquer approach
#include<iostream>
using namespace std;

int main()
{
    int beg, end, mid, lb = 0, ub, item, loc;


    int data[] = {2, 4, 6, 37, 47, 199, 234, 472, 837, 878, 82991, 83838};

    ub = 11;
    beg = lb;
    end = ub;

    // cout<<"\n";
    // for(int i = 0; i<n; i++)
    // {
    //     cout<<i<<" index : ";
    //     cin>>data[i];
    // }

    cout<<"\nEnter element to search : ";
    cin>>item;

    mid = (int) ((beg + end)/2);

    while(beg <= end && data[mid] != item)
    {
        if(item > data[mid])
        {
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
        mid = (int)((beg + end)/2);
    }

    if(data[mid] == item)
    {
        loc = mid;
        cout<<"\nLocation = "<<loc<<"\n\n";
    }
    else{
        cout<<"Element is not present\n\n";
    }

    return 0;
}