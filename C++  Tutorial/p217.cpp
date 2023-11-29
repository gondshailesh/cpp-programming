// sorting in array
// Insertion sort
// 32, 2, 23, 9, 13
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {32, 2, 23, 9, 13};
    int i, j, temp;

    for(i = 0; i < 5; i++)
    {
        temp = arr[i];

        for(j = i-1; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    cout<<"\nsorted array : \n\n";
    for(int i = 0; i<5; i++)
    {
        cout<<i<<" index : "<<arr[i]<<endl<<"\n";
    }

    return 0;
}