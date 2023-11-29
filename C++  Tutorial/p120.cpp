// combination of A to Z using nested loop
#include<iostream>
using namespace std;

int main()
{  
    for(char ch = 'A'; ch<='Z'; ch++)
    {
        for(char i = 'A'; i<='Z'; i++)
        {
            cout<<ch<<" "<<i<<endl;
        }
    }

    return 0;
}