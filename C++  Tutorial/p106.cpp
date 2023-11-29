// Input & Print string using characters
#include<iostream>
using namespace std;

void inputString(char arr[]);
void printString(char arr[]);

int main()
{  
    char str[100];
    cout<<"\nEnter a string : ";

    inputString(str);
    cout<<endl;
    printString(str);

    return 0;
}

void inputString(char arr[])
{
    char ch = ' ';
    int i = 0;

    while(ch != '\n')
    {
        cin.get(ch);
        arr[i] = ch;
        i++;
    }
    arr[i] = '\0';
}

void printString(char arr[])
{
    int i;
    for(i = 0; arr[i] != '\0'; i++)
    {
        cout<<arr[i];
    }
}