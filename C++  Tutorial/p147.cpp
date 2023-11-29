// program to print all perfect squares between 1000 and 9999 in such way that they are in form of
// AABB eg. 7744
#include<iostream>
#include<cmath>
using namespace std;

int main()
{  
    int i, d1, d2, d3, d4, srt;
    
    for(i = 1000; i<=9999; i++)
    {
        srt = sqrt(i);
        if(srt*srt == i)
        {
            d1 = i % 10;
            d2 = (i % 100 - i % 10)/10;
            d3 = (i % 1000 - i % 100)/100;
            d4 = (i % 10000 - i % 1000)/1000;
            
            if(d1 == d2 && d3 == d4)
            {
                cout<<i<<endl;
            }
        }
    }

    return 0;
}