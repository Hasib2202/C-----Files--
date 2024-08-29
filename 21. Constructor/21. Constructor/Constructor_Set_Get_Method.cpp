#include<iostream>
using namespace std;


class Student
{

    public:
        string name="";
        string id="";
        int age=0;

    private:
        float cgpa=0;

    public:

        Student()
        {
           cout<<"Student Default or Empty Constructor"<<endl;
        }

        Student(string n,string i, int a, float c)
        {
            cout<<"Student Parameterized Constructor"<<endl;
            name = n;
            id = i;
            age = a;
            cgpa = c;
        }

        //setter method
        void setCgpa(float c)
        {
            if(c>=0 && c <=4){
                cgpa = c;
            }
            else{
                cout<<"Invalid CGPA Value"<<endl;
            }
        }
        //getter method
        float getCgpa()
        {
            return cgpa;
        }

        //methods
        void showStudentInfo(){
            cout<< name <<endl;
            cout<< id <<endl;
            cout<< age <<endl;
            cout<< cgpa <<endl;
        }

};

int main()
{
    Student s1("Karim","20-XXXXX-2",21,3.75);

    cout<<endl;

    s1.showStudentInfo();

    cout<<endl;

    Student s2("Kamal","20-XXXX1-2",22,3.77);

    cout<<endl;

    s2.showStudentInfo();

    cout<<endl;

    s2.setCgpa(5.00);
    cout<<s2.getCgpa()<<endl;

    cout<<endl;

    Student s3;

return 0;
}
