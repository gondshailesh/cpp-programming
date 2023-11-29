// Input string & print it`s length using 'string'
#include<iostream>
#include<string>
using namespace std;

int countLength(string arr)
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    string str;
    cout<<"Enter a string : ";
    
    getline(cin, str);

    
    cout<<"Length = "<<countLength(str);

    return 0;
}