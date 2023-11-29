// print only odd no. from 5 to 50 using continue
#include<iostream>
using namespace std;

int main()
{
    int i;

    for(i = 5; i<=50; i++)  
    {
        if(i % 2 == 0)
        {
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}