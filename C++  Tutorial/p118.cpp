//check whether a given character present in string or not
#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);

    char ch;
    int count = 0;
    cout<<"Enter a char : ";
    cin>>ch;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            cout<<"character is present\n";
            return 0;
        }
    }
    cout<<"character is not present\n";

    return 0;
}