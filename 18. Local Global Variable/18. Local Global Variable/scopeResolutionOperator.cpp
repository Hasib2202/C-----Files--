#include <iostream>
using namespace std;

int x=15; //Global Variable


void display()
{
    //int x=5;//Local Variable
    cout<<"Inside the display function:"<<x<<endl;
}

int main()
{
   // int x=10; //Local Variable
    ::x=25;
    cout<<"Inside the main function:"<<x<<endl;

    display();

    return 0;
}


