//program to display all characters (0 to 255) and their ASCII Values
#include<iostream>
using namespace std;

int main()
{  
    unsigned char ch; // 0 - 255
    ch = 0;

    while(ch < 255)
    {
        cout<<(char)ch<<" = "<<(int)ch<<endl;
        ch++;
    }
    cout<<(char)ch<<" "<<ch<<endl;

    return 0;
}