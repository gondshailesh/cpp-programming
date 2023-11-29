/* program to display following pattern   == == Important == == 
   
   F E D C B A
   F E D C B
   F E D C
   F E D
   F E 
   F

 */
#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char ch, a, b, i;
    cout<<"Enter an alphabet : ";
    cin>>ch;

    ch = toupper(ch);
    a = 'A';

    for(i = ch; i>='A'; i--)
    {
        for(b = ch; b>=a; b--)
        {
            cout<<b<<" ";
        }
        cout<<endl;
        a++;
    }
   
    return 0;
}