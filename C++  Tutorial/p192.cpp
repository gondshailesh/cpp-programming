// Inserting a character inside a string
#include<iostream>
#include<cstring>
using namespace std;

void insertChar(char arr[], int pos1, int pos2, char ch1, char ch2)
{
    for(int i = strlen(arr); i >= pos1-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos1-1] = ch1;

    for(int i = strlen(arr); i >= pos2; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos2] = ch2;
    cout<<"Modified string : "<<arr;
}

int main()
{  
    char str[50];
    cout<<"Enter a string : ";
    char val = ' ', ch1, ch2;
    int i = 0, pos1, pos2;

    while(cin.get(val) && val != '\n')
    {
        str[i] = val;
        i++;
    }
    str[i] = '\0';
    
    cout<<"enter first character to insert : ";
    cin.get(ch1); // can be used to input space character also
    cout<<"enter position to insert : ";
    cin>>pos1;
     
    cin.ignore(); 
    
    cout<<"enter second character to insert : ";
    cin.get(ch2); // can be used to input space character also
    cout<<"enter position to insert : ";
    cin>>pos2;
    
    insertChar(str, pos1, pos2, ch1, ch2);

    return 0;
}