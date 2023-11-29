// uppercase to lowercase and vice-versa
#include<iostream>
using namespace std;

int main()
{  
    char ch;
    cout<<"Enter an alphabet : ";
    cin>>ch;

    if(isupper(ch))
    {
        cout<<(char)tolower(ch);
    }
    else if(islower(ch))
    {
        cout<<(char)toupper(ch);
    }
    else{
        cout<<"Invalid input\n";
    }

    return 0;
}