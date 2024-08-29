#include<iostream>
using namespace std;

class Rectangle
{
    /*if access modifier is not mentioned then
    by default attributes/methods are assigned under private access modifier*/
    int length, breadth;

  public:

      void setDimension(int l, int b)
      {
          length=l;
          breadth=b;
      }

      int getArea()
      {
          return length*breadth;
      }

      Rectangle()
      {
          cout<<"Constructor is called"<<endl;
      }

    //Destructor
    //Destructor is a special type of method
    //Destructor does not have any return type not even void
    //Destructor has a tilde(~)sign before it's name
    //Name of a Destructor is as same as class name
    //Destructor can not take any parameters
    //Destructor is called automatically at the time of object deletion/destroy
    //Destructor is called exactly one time for an object.

      ~Rectangle()
      {
          cout<<"Destructor is called"<<endl;
      }



};

int main()
{
    Rectangle rt;

    rt.setDimension(4, 8);

    cout<<rt.getArea()<<endl;


    return 0;
}
