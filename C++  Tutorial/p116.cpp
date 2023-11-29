// print slice / substring of a string
#include<iostream>
using namespace std;

void printSlice(string arr, int m, int n)
{
    char newStr[50] = {0};
    int i, j;
    for(i = m, j = 0; i<=n; i++, j++)
    {
        newStr[j] = arr[i];
    }
    newStr[j] = '\0';
    cout<<"new string : "<<newStr<<endl;
}

int main()
{
    string str;
    int m, n;

    cout<<"Enter string : ";
    getline(cin, str);

    cout<<"Enter first index : ";
    cin>>m;
    cout<<"Enter last index : ";
    cin>>n;

    printSlice(str, m, n);

    return 0;
}