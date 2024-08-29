#include<iostream>
using namespace std;

class A
{
public:

   // Only declaration
   void fun();

};

// Definition outside class using ::
//method'sReturntype className :: methodName(){ //body}
void A::fun()
{
   cout << "fun() is called"<<endl;
}

int main()
{
   A a;
   a.fun();
   return 0;
}


