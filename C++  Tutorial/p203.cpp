// program to store two vectors and print sum of two vectors
#include<iostream>
using namespace std;

struct vector{
    int x;
    int y;

    void setData(int i, int j)
    {
        x = i;
        y = j;
    }
};

// non-member function
void sum(vector v1, vector v2, vector v3)
{
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    cout<<"\n\nsum of two vectors = "<<v3.x<<"i"<<" + "<<v3.y<<"j\n\n";
} 

int main()
{
   vector v1, v2, v3;
   int x1, x2, y1, y2;

   cout<<"\nEnter x component of v1 : ";
   cin>>x1;
   cout<<"Enter y component of v1 : ";
   cin>>y1;

   v1.setData(x1, y1);
   cout<<"\nfirst vector : "<<v1.x<<"i"<<" + "<<v1.y<<"j";

   cout<<"\n\nEnter x component of v2 : ";
   cin>>x2;
   cout<<"Enter y component of v2 : ";
   cin>>y2;

   v2.setData(x2, y2);
   cout<<"\nsecond vector : "<<v2.x<<"i"<<" + "<<v2.y<<"j";
 
   sum(v1, v2, v3);

   return 0;
}