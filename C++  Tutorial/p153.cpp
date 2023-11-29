/* program to display following pattern   == == Important == == 
   
   A B C D E F 
   A B C D E
   A B C D 
   A B C
   A B
   A

 */
#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char ch, a, b;
    cout<<"Enter an alphabet : ";
    cin>>ch;

    ch = toupper(ch);

    for(a = 'A'; a<=ch; a++)
    {
        for(b = a; b<=ch; b++)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}