// program to check whether a string is palindrome or not  

#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char *arr)
{
    char tempStr[50];
    strcpy(tempStr, arr);

    char temp[50];
    int n = strlen(arr);

    for(int i = 0; i<n/2; i++)
    {
        temp[i] = *(arr+i);
        *(arr+i) = *(arr+(n-i-1));
        *(arr+(n-i-1)) = temp[i];
    }
    cout<<"Modified string : "<<arr<<endl;

    if(strcmp(tempStr, arr) == 0)
    {
        cout<<"'"<<tempStr<<"'"<<" is palindrome";
    }
    else{
        cout<<"'"<<tempStr<<"'"<<" is not palindrome";
    }
}

int main()
{
    char str[50];
    cout<<"Enter a string : ";
    char val = ' ';
    int i = 0;

    while(cin.get(val) && val != '\n')
    {
        str[i] = val;
        i++;
    }
    str[i] = '\0';

    reverseString(str);

    return 0;
}