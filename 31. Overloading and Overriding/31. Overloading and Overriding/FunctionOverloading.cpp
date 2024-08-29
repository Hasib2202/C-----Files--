#include <iostream>
using namespace std;

void sum(int,int);
void sum(double,double);


int main()
{

    sum(10,5);
    sum(10.5,2.3);

    return 0;
}

void sum(int x,int y)
{
    int add;
    add=x+y;
    cout<<add<<endl;
}

void sum(double x,double y)
{
    double add;
    add=x+y;
    cout<<add<<endl;
}


