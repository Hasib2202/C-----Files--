#include<iostream>
using namespace std;

// method overriding
class Person{
protected:
    string name;
public:
    Person(string n)
    {
        name=n;
    }

    //virtual function
//    virtual void showDetails() //overridden function
//    {
//        cout<<"Person ShowDetails : "<<name<<endl;
//    }


/*
//abstract class:a class is called abstract when there are one or
//more pure virtual method/methods
*/

    virtual void showDetails()=0; //pure virtual function

};

class Student:public Person{
public:
    Student(string n):Person(n){
    }
    //function override
    void showDetails(){ //overriding function
    cout<<"Student ShowDetails : "<<name<<endl;

    }
};

int main(){

    Person p1("P-1");
    p1.showDetails();

//    Student s1("S-1");
//    s1.showDetails();

//    s1.Person::showDetails();

   //converting derived class object
   //into base class object using type casting
//   ((Person)s1).showDetails();
//    ((Student)p1).showDetails(); //error

//    Student s2("S-2");
//    Person *p2 = &s2;
//
//      s2.showDetails();
//     (*p2).showDetails();
//      p2->showDetails();


    //converting base class pointer
   //into derive class pointer using type casting
   //((Student *)p2)->showDetails();



return 0;
}
