// inserting a character at end of string
// using char array
#include<iostream>
#include<cstring>
using namespace std;

void insertChar(char arr[], char ch)
{
    int n = strlen(arr);
    arr[n] = ch;
    arr[n+1] = '\0';
    cout<<"Modified string : "<<arr;
}

int main()
{
    char str[50];
    cout<<"Enter a string : ";
    char val = ' ', ch;
    int i = 0;

    while(cin.get(val) && val != '\n')
    {
        str[i] = val;
        i++;
    }
    str[i] = '\0';
    
    cout<<"enter character to insert : ";
    cin>>ch;
    
    insertChar(str, ch);

    return 0;
}
