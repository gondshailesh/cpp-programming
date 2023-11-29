// program to remove blank spaces from string
#include<iostream>
// #include<string>
using namespace std;

void removeSpaces(string arr)
{
    int i, j, len;
    len = arr.length();
    cout<<"Length = "<<len<<endl;

    for(i = 0; i<len; i++)
    {
        if(arr[i] == ' ')
        {
            for(j = i; j<len; j++)
            {
                arr[j] = arr[j+1];
            }
            len--;
        }
    }

    arr[i] = '\0';
    cout<<"new string : "<<arr<<endl;
    cout<<"length = "<<len;
}

int main()
{  
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);

    removeSpaces(str);

    return 0;
}