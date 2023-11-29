// print uppercase & lowercase alpha ( a to z )
#include<iostream>
using namespace std;

int main()
{
    // uppercase
    for(char ch = 'A'; ch<='Z'; ch++)
    {
        cout<<ch<<" ";
    }
    
    cout<<endl;

    for(char ch = 'a'; ch<='z'; ch++)
    {
        cout<<ch<<" ";
    }
   
    return 0;
}

