// Input string & print it`s length using char arr[]
#include<iostream>
#include<string>
using namespace std;

int countLength(char arr[])
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

int main()
{
    char str[50];
    cout<<"Enter a string : ";
    
    char ch = ' ';
    int i = 0;
    
    // input
    while(ch != '\n')
    {
        cin.get(ch);
        str[i] = ch;
        i++; 
    }
    str[i] = '\0';

    
    cout<<"Length = "<<countLength(str);

    return 0;
}
