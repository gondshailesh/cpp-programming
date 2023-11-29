// Input string and print how many times a character occurs
#include<iostream>
#include<string>
using namespace std;

int countChar(string arr, char ch)
{
    int i, count = 0;
    for(i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] == ch)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string str;
    char ch;

    cout<<"Enter string : ";
    getline(cin, str);

    cout<<"Enter character : ";
    ch = cin.get(); // reads single char from input stream

    cout<<ch<<" occurs "<<countChar(str, ch)<<" times in "<<"'"<<str<<"'"<<endl;

    return 0;
}
