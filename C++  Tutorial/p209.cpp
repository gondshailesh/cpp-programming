// program to replace all lowercase letters to uppercase and vice-versa
#include<iostream>
using namespace std;

int main()
{  
    int i;
    string str;
    cout<<"\nEnter string : ";
    getline(cin, str);

    for(i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }

        else if(str[i] >= 'A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }

    cout<<"modified string : "<<str<<endl<<"\n";

    return 0;
}
