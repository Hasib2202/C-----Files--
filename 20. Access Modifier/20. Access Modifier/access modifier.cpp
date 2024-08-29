#include<iostream>
using namespace std;

class Calculator
{

    //private:
      //  int x, y;

    public:
       int a, b;


    void sum()
    {
        cout<<"Sum of "<< a <<" and "<< b <<" is:"<<a+b;
    }


   /* void setData(int i, int j)
    {
      x = i;
      y = j;
    }


    void sub()
    {
        cout<<"Sub of "<< x <<" and "<< y <<" is:"<<x-y;
    }*/
};

int main()
 {
       Calculator obj;

        obj.a = 2;
        obj.b = 5;

        obj.sum();

       // obj.x = 5;
        //obj.y = 3;

        //obj.setData(9,5);

        //obj.sub();

   return 0;
}


