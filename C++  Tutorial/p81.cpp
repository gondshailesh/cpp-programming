// pointer arithmetic ( Increment and Decrement )
// pointer can be Incremented , Decremented
// it increments and decrements W.R.T to it`s data_type
// we can also compare two pointers & subtract one pointer from another

#include<iostream>
using namespace std;

int main()
{  
    char ch = '@';
    char *at = &ch; // character pointer

    cout<<(int)&ch<<endl;

    cout<<(int)at<<endl;

    cout<<(int)at--<<endl;

    cout<<(int)at<<endl;

    cout<<(int)&at<<endl;

    cout<<*at<<endl;

    cout<<(int)*at<<endl;

    cout<<(*at)++<<endl;
    
    cout<<(*at)<<endl;

    return 0;
}
