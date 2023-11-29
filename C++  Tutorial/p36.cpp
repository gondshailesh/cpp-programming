// while loop
#include<iostream>
using namespace std;

int main()
{
    int i = 1; // initialization

    while(i <= 10) // condition
    {
        cout<<i<<endl;
        i++; // increment
    }
    
    cout<<endl;
    cout<<(++i)<<endl;
    cout<<(--i)<<endl;
   
    return 0;
}