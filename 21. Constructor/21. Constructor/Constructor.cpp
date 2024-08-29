#include <iostream>
using namespace std;


class Student
{

        public:
         int id;
         double cgpa;


         void display()
         {
             cout<<id<<" "<<cgpa<<endl;
         }



    //Constructor is a special type of method
    // it does not have any return type not even void.
    // Name of a constructor is as same as class name
    // it can take any number of parameter as normal methods.
    // it is automatically executed at the time of creating object
    // it is mainly used for initializing properties/data members
    //2 types of constructor: default and parameterized constructor
    //Constructor is called exactly one time for an object;

         Student() //default constructor
         {
           cout<<"Default Constructor!"<<endl;

         }

         Student(int x, double y) //parameterized constructor
         {
            id=x;
            cgpa=y;

         }


};

int main()
{
    Student obj;

   // obj.id=1;
   // obj.cgpa=3.5;

    obj.display();

    Student sara(13,3.76);
    sara.display();

    Student wafa(24,4.00);
    wafa.display();



    return 0;
}



