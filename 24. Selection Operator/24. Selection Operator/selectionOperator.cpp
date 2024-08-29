#include <iostream>
using namespace std;

class myClass
{
 public:
    void display()
    {
        cout<<"display is called"<<endl;
    }
};


int main()
{
    myClass ob1;

     //ob1.display();

      myClass *p=&ob1; //using pointer
      p->display(); //selection operator ->


    return 0;
}
