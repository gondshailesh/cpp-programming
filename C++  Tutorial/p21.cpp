// switch case statement
#include<iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter day (1-7) : ";
    cin>>day;

    switch(day)
    {
        case 1:
              cout<<"Monday\n";
              break;
        case 2:
              cout<<"Tuesday\n";
              break;
        case 3:
              cout<<"Wednesday\n";
              break;
        case 4:
              cout<<"thursday\n";
              break;
        case 5:
              cout<<"Friday\n";
              break;
        case 6:
              cout<<"Saturday\n";
              break;
        case 7:
              cout<<"Sunday\n";
              break;
        default:
              cout<<"Invalid day\n";
    }

    return 0;
}