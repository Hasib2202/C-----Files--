#include <iostream>
using namespace std;

class Person
{
public:
   void display() //overridden function
    {
        cout<<"I am in Person class"<<endl;
    }
};

class Student:public Person
{
public:
    void display() //overriding function
    {
        cout<<"I am in Student class"<<endl;
        //Person::display(); // 1.Call Overridden Function From Derived Class
    }

};

class Teacher:public Person
{
public:
    void display() //overriding function
    {
        cout<<"I am in Teacher class"<<endl;
    }
};


int main()
{
    Student s;
    s.display();

    Teacher t;
    t.display();


    //s.Person::display(); //2. Access Overridden Function to the Base Class

    /* 3. Call Overridden Function Using Pointer:
    Reference of base class pointing to
     the object of child class.
    */
//    Person *p=&s;
//    p->display();


    return 0;
}
