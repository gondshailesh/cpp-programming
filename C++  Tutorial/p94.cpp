/* the standard library file <cctype> is used for character handling function - isalnum() ,isalpha(), isdigit(), isupper(), islower() , toupper(), tolower() */
#include<iostream>
#include<cctype>
using namespace std;

int main()
{  
    char ch;
    cout<<"Enter a char : ";
    cin>>ch;

    if(!isalnum(ch))
    {
        cout<<ch<<" is special symbol";
    }
    else if(isdigit(ch))
    {
        cout<<ch<<" is digit";
    }
    else{
        cout<<ch<<" is alphabet";
    }
    
    return 0;
}