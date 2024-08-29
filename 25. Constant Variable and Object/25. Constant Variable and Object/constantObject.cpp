#include <iostream>
using namespace std;

class myClass
{

public:
    void display1() const //constant method
    {
        cout<<"I am in constant function"<<endl;
    }

    void display2() //non-constant method
    {
        cout<<"I am in non-constant function"<<endl;
    }


};


int main()
{
    const myClass ob1; //constant object

    //ob1.display1(); //method must be constant for constant objects
      ob1.display2(); //cannot access non-constant method with constant objects

     myClass ob2; //non-constant object

     ob2.display2(); //can access constant and non-constant method with
     ob2.display1(); // non-constant object

    return 0;
}
