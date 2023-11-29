// break statement
#include<iostream>
using namespace std;

int main()
{
    int i;

    for(i = 1; i<=10; i++)  
    {
        cout<<i<<endl;
        if(i == 5)
        {
            break;
        }
    }

    return 0;
}