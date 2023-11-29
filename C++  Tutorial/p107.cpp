// 'string' data type is a built-in class in c++,

// 'string' objects are auto terminated, while
// in case of char array, it is up to the coder to explicitly terminate string
// by adding '\0' to the end

// 'string' class has it`s own functionality & memory management

// size of 'string' dynamically grows & shrinks as chars are added OR removed

// In case of char arr[] size is fixed

// cin>>str; - it reads only upto when first white space character is encounterd
// getline(cin, str) - reads entire line of text including white space characters

#include<iostream>
using namespace std;

int main()
{  
    char str[100];

    cout<<"Enter a string : ";
    cin>>str;

    cout<<"you entered : "<<str;

    return 0;
}
