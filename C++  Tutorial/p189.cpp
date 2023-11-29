// User defined - character handling functions
#include <iostream>
using namespace std;

void isAlnum(char ch);
void isAlpha(char ch);
void toConvert(char ch); // upper to lower & vice-versa

int main()
{
    char ch;
    cout<<"enter character : ";
    cin>>ch;

    // isAlnum(ch);
    // isAlpha(ch);
    toConvert(ch);

    return 0;
}

void isAlnum(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            cout << ch << " is alphabet\n";
        }
        else
        {
            cout << ch << " is digit\n";
        }
    }
    else
    {
        cout << ch << " is symbol\n";
    }
}

void isAlpha(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout << ch << " is alphabet\n";
    }
    else{
        cout << ch << " is not alphabet\n";
    }
}

void toConvert(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        ch = ch + 32;
        cout<<ch<<endl;
    }
    else if(ch>='a' && ch<='z')
    {
        ch = ch - 32;
        cout<<ch<<endl;
    }
}