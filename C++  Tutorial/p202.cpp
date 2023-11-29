// We can declare data members as well as member functions in structure

// all members are public

// can be accessed directly using objects

#include<iostream>
using namespace std;

static int gobal_var = 10;

struct job{

// by default all members are public

// data members
    int vacancies; 
    static string post;

// member functions
    inline void ShowVacant(int); 
    static void display(void);
};

//type class::member = value // init
string job::post = "Manager";

inline void job:: ShowVacant(int extras = 10)
    {
        cout<<"\navialable posts : "<<vacancies + extras<<endl;
        cout<<"gobalally available : "<<gobal_var<<endl;
        gobal_var++;
    }

void job:: display(void)
{
    cout<<"name of post : "<<post<<endl;
    cout<<"gobal avail : "<< ++gobal_var<<endl;
    post = "team lead";
}

int main()
{
    job hr[2];
    
    hr[0].vacancies = 2;
    hr[1].vacancies = 5;

    //display
    for(int i = 0; i<2; i++)
    {
        hr[i].ShowVacant();
        job::display();
    }

    return 0;
}