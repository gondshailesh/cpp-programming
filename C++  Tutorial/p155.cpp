/* program to display following pattern   == == Important == == 
   
   A
   A B
   A B C
   A B C D
   A B C D E
   A B C D E F

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
        for(b = 'A'; b<=a; b++)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}