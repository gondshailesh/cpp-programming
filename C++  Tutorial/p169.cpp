// program to insert a password inside string
// string - santoshbhay
// password - @12gmail.com
// output - santosh@12gmail.combhay
#include<iostream>
using namespace std;

void insertPass(string &myStr, const string &pass, int m)
{
    
     // concatnating password with original string from 'm'th index
    myStr.insert(m, pass);

    cout<<"\nyour new password : "<<myStr<<endl;
}

int main()
{  
    int n;
    string str;
    cout<<"enter your password : ";
    getline(cin, str);
    cout<<"enter index : ";
    cin>>n;
    cout<<"press 'enter' to continue : \n";

    cin.ignore();
    string pass;
    cout<<"enter salt : ";
    getline(cin, pass);

    insertPass(str, pass, n);

    return 0;
}