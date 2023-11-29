// lowercase & uppercase vowel, consonant & digit
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout<<ch<<" is uppercase vowel"<<endl;
    }

    else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout<<ch<<" is lowercase vowel"<<endl;
    }

    else if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9')
    {
        cout<<ch<<" is a digit"<<endl;
    }
    
    else{
        cout<<ch<<" is consonant"<<endl;
    }
   
    return 0;
}
