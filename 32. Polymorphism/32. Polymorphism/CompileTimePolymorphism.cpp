#include<iostream>
using namespace std;

class Test{
public:
    //This is function/method overloading
    /*The methods will have the same name but different
     signature
     This is known as Static/Compile time polymorphism
    */

    //signature means method name with parameter list
    //along with parameters data type.
    void testMethod(){
    cout<<"Test Method with empty parameter"<<endl;
    }

    void testMethod(int i){
    cout<<"Test Method with Int parameter"<<endl;
    }

    void testMethod(bool i){
    cout<<"Test Method with Boolean parameter"<<endl;
    }

    void testMethod(float f){
    cout<<"Test Method with Float parameter"<<endl;
    }
    void testMethod(double f){
    cout<<"Test Method with Double parameter"<<endl;
    }

    void sum(int a,int b){
    cout<<a+b<<endl;
    }

    void sum(float a,float b){
    cout<<a+b<<endl;
    }
    void sum(float a,int b){
    cout<<"FLOAT + INT"<<endl;
    cout<<a+b<<endl;
    }
    void sum(int a,float b){
    cout<<a+b<<endl;
    }
    void sum(int a,int b,int c){
    cout<<a+b+c<<endl;
    }

    Test operator + (Test t){
    cout<<"Test object + Test Object"<<endl;
        //return t;
    }
    void operator + (int i){
        cout<<"Test + int"<<endl;
    }
    void operator + (float i){
        cout<<"Test + float"<<endl;
    }
};

class TestClass{private:};

int main(){
    Test t;

    t.testMethod();
    t.testMethod(20);
    t.testMethod((float)30.33);
    t.testMethod(10.10);
    t.testMethod(false);




    t.sum((float)5.7,6);

  /*  Test t1,t2;

    t1+t2;
    t1+2;
    t1+(float)2.5; */



return 0;
}
