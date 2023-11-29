// Even natuaral numbers from 1 to n & their sum
#include<iostream>
using namespace std;

int main()
{
    int i, n, sum_even = 0, sum_odd = 0;

    cout<<"Enter a number : ";
    cin>>n;

    for(i = 1; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            cout<<i<<endl;
            sum_even = sum_even + i;
        }
        else{
            sum_odd = sum_odd + i;
        }
    }

    cout<<"sum of even no. = "<<sum_even<<endl;
    cout<<"sum of odd no. = "<<sum_odd<<endl;
    cout<<"Total sum = "<<sum_even + sum_odd;
   
    return 0;
}