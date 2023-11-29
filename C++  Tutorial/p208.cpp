// program to convert all lowercase vowels to uppercase in string
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
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            str[i] = str[i] + 32;
        }
    }

    cout<<"modified string : "<<str<<endl<<"\n";

    return 0;
}
