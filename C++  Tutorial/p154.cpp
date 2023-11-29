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
    char ch, a, b, temp;
    cout<<"Enter an alphabet : ";
    cin>>ch;

    ch = toupper(ch);
    temp = ch;

    for(a = 'A'; a <= temp; a++)
    {
        for(b = 'A'; b<=ch; b++)
        {
            cout<<b<<" ";
        }
        ch--;
        cout<<endl;
    }
   
    return 0;
}