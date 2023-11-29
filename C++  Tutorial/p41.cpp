// numbers divisible by 4 and their sum from 1 to 50
#include<iostream>
using namespace std;

int main()
{
    int i, sum = 0;

    for(i = 1; i<=50; i++)
    {
        if(i % 4 == 0)
        {
            cout<<i<<endl;
            sum = sum + i;
        }
    }
    cout<<"sum = "<<sum<<endl;

    return 0;
}
