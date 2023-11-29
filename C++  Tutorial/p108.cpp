// 'string' data-type & getline() function
#include<iostream>
#include<string>
using namespace std;

int main()
{  
    string str; // string - class/data-type & str - object/variable
    cout<<"Enter a string : ";
    getline(cin, str);

    cout<<"you entered : "<<str;

    return 0;
}