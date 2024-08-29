#include<iostream>
using namespace std;


class Student{

    string name;
    string id;
    int age;
    float cgpa;

public:
    static int studentCount;
    static int getStudentCount(){
        return studentCount;
    }

       //Empty Constructor
    Student()
    {
        name = "";
        id = "";
        age = 0;
        cgpa = 0;
        studentCount++; //1 2
        cout<<"Empty Student Constructor"<<endl;
    }

    Student(string n, string i, int a, float cg){
        name = n;
        id = i;
        age = a;
        cgpa = cg;
        studentCount++; //3
        cout<<"Parameterized Student Constructor "<< name <<endl;
    }

    ~Student(){
        cout<<"Destructor is called for "<< name <<endl;
        studentCount--; //2 1 0
        cout<<"Number of Student left : "<< studentCount <<endl;
        cout<<endl;
    }


    //setter methods
    void setName(string n){
        name = n;
    }

    void setId(string i){
        id = i;
    }

    void setAge(int a){
        age = a;
    }

    void setCgpa(float cg){
        //filtering the valid cgpa
        if(cg>=0 && cg<=4 ){
            cgpa = cg;
        }
        else{
            cout<<cg <<" is Invalid CGPA value"<<endl;
        }
    }

    // getter methods
    string getName(){ return name;}
    string getId(){ return id;}
    int getAge(){ return age;}
    float getCgpa(){ return cgpa;}

    void showStudentInfo(){
        cout<<"Name :"<< name <<endl;
        cout<<"ID :"<<id <<endl;
        cout<<"Age :"<<age <<endl;
        cout<<"Cgpa :"<<cgpa <<endl;
    }
};

//initializing Class variable/static variable
int Student::studentCount = 0;


int main(){

    Student s1, s2;
    cout<<endl;

    s1.setName("Kabir");
    s1.setId("20-XXXXX-1");
    s1.setAge(21);
    s1.setCgpa(3.75);

    s1.showStudentInfo();
    cout<<endl;

    s2.setName("Kamal");
    s2.setId("20-XXXX2-1");
    s2.setAge(22);
    s2.setCgpa(2.70);

    s2.showStudentInfo();
    cout<<endl;


    Student s3("Abdul","20-XXXX3-1",21,3.5);
    s3.showStudentInfo();
    cout<<endl;

   // cout<<"Total Student : "<<Student::studentCount<<endl;
    cout<<"Total Student : "<<Student::getStudentCount()<<endl;
    cout<<endl;


    return 0;
}
