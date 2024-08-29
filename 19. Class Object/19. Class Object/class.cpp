#include<iostream>
using namespace std;

//class ClassName { body };
class Student
{

public: //access modifier
    int age; //variable/attribute/class member
    float cgpa;

    void showStudentInfo() //function/method/class member
    {
        cout<< age <<endl;
        cout<< cgpa <<endl;
    }

    void setValue(int x, float y)
    {
        age=x;
        cgpa=y;

    }


};

int main(){
    //student

    Student s1,s2; //variable/object/instance

    s1.age = 21;
    s1.cgpa = 3.75;

    //cout<<s1.age<<" "<<s1.cgpa<<endl;

    s1.setValue(s1.age,s1.cgpa);
    s1.showStudentInfo();

    //student

    //s2.age = 22;
    //s2.cgpa = 3.95;

   // cout<<s2.age<<" "<<s2.cgpa<<endl;

    s2.setValue(22,3.95);
    s2.showStudentInfo();

    return 0;
}





