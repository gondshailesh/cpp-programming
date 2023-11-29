/* nested switch statement */

#include<iostream>
using namespace std;

int main()
{  
    int date, month, year;

    cout<<"Enter date (1-31) : ";
    cin>>date;

    cout<<"Enter month (1-12) : ";
    cin>>month;

    cout<<"Enter year (2022) : ";
    cin>>year;

    switch ( date )
    {
    case 1 :
           cout<<" date : 1";
           switch ( month )
           {
           case 1 :
             cout<<" january";
             break;
           case 2 :
             cout<<" february";
             break;
           case 3 :
             cout<<" march";
             break;
           case 4 :
             cout<<" april";
             break;
           case 5 :
             cout<<" may";
             break;
           case 6 :
             cout<<" june";
             break;
           case 7 :
             cout<<" jully";
             break;
           case 8 :
             cout<<" august";
             break;
           case 9 :
             cout<<" september";
             break;
           case 10 :
             cout<<" octomber";
             break;
           case 11 :
             cout<<" november";
             break;
           case 12 :
             cout<<"december";
             break;
           
           default:
              cout<<"\n not a valid month";
              break;
               
           }
            switch ( year )
              {
                case 2022:
                  cout<<" 2022";
                  break;
                  
                default:
                   cout<<"\n not a valid year";
              } 
        break;

        case 2 :
           cout<<" date : 2 ";
           switch ( month )
           {
           case 1 :
             cout<<" january";
             break;
           case 2 :
             cout<<" february";
             break;
           case 3 :
             cout<<" march";
             break;
           case 4 :
             cout<<" april";
             break;
           case 5 :
             cout<<" may";
             break;
           case 6 :
             cout<<" june";
             break;
           case 7 :
             cout<<" jully";
             break;
           case 8 :
             cout<<" august";
             break;
           case 9 :
             cout<<" september";
             break;
           case 10 :
             cout<<" octomber";
             break;
           case 11 :
             cout<<" november";
             break;
           case 12 :
             cout<<" december";
             break;
           
           default:
              cout<<"\n not a valid month";
              break;
                            
           }
           switch ( year )
              {
              case 2022:
                  cout<<" 2022";
                break;
               default:
                  cout<<"\n not a valid year\n";
              }
         break;
         
         case 3 :
           cout<<" date : 3 ";
           switch ( month )
           {
           case 1 :
             cout<<" january";
             break;
           case 2 :
             cout<<" february";
             break;
           case 3 :
             cout<<" march";
             break;
           case 4 :
             cout<<" april";
             break;
           case 5 :
             cout<<" may";
             break;
           case 6 :
             cout<<" june";
             break;
           case 7 :
             cout<<" jully";
             break;
           case 8 :
             cout<<" august";
             break;
           case 9 :
             cout<<" september";
             break;
           case 10 :
             cout<<" octomber";
             break;
           case 11 :
             cout<<" november";
             break;
           case 12 :
             cout<<" december";
             break;
           
           default:
              cout<<"\n not a valid month";
              break;
                            
           }
           switch ( year )
              {
              case 2022:
                       cout<<" 2022";
                       break;
               default:
                      cout<<"\n not a valid year\n)";
              }
              break;

          default:
                 cout<<"\n not a valid date";
                 break;
    }

     return 0;
}
 