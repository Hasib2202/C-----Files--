#include <iostream>
using namespace std;

/*
//Static variables in a Function

void demo()
{
    // static variable
    static int count = 0;
    cout << count << " "; //0 1 2 3 4

    // value is updated and
    // will be carried to next
    // function calls
    count++; //1 2 3 4 5
}

int main()
{
    int i;

    for(i=0; i<5; i++)
    {
        demo();
    }

    return 0;
}
*/





/*
//Static variables in a class: with error

class GfG
{
   public:
     static int i;

     GfG()
     {
        // Do nothing
     }
};

int main()
{
  GfG obj1;
  GfG obj2;
  obj1.i =2;
  obj2.i = 3;

  // prints value of i
  cout << obj1.i<<" "<<obj2.i;
}
*/






/*
//Static variables in a class: EXAMPLE 1

class GfG
{
public:
     static int i;

    GfG()
    {
        // Do nothing
    }
};

int GfG::i = 1;

int main()
{
    GfG obj;
    // prints value of i
    cout << obj.i;
}
*/






/*
//Static variables in a class: EXAMPLE 2


class Test
{
    static int x;
public:
    static int y;

    void func(int x)
    {
       // We can access class's static variable
       // even if there is a local variable
       cout << "Value of static x is " << Test::x;

       cout << "\nValue of local x is " << x;
    }
};

// In C++, static members must be explicitly defined
// like this
int Test::x = 1;
int Test::y = 2;


int main()
{
    Test obj;
    int x = 3 ; //Local variable
    obj.func(x);

    cout << "\nTest::y = " << Test::y;
    cout<<obj.y;
    return 0;
}
*/





/*

//Static Members of Class:
//Class objects as static

// CPP program to illustrate
// when not using static keyword


class GfG
{
    int i;
    public:
        GfG()
        {
            i = 0;
            cout << "Inside Constructor\n";
        }
        ~GfG()
        {
            cout << "Inside Destructor\n";
        }
};

int main()
{
    int x = 0;
    if (x==0)
    {
        GfG obj;
    }
    cout << "End of main";
}
*/



/*
//Static Members of Class:
//Class objects as static

// CPP program to illustrate
// class objects as static

class GfG
{
    int i = 0;

    public:
    GfG()
    {
        i = 0;
        cout << "Inside Constructor\n";
    }

    ~GfG()
    {
        cout << "Inside Destructor\n";
    }

};

int main()
{
    int x = 0;
    if (x==0)
    {
        static GfG obj;

    }
    cout << "End of main"<<endl;
    return 0;
}
*/



/*
//Static functions in a class

// C++ program to demonstrate static
// member function in a class

class GfG
{
    public:

    // static member function
    static void printMsg()
    {
        cout<<"Welcome to GfG!";
    }
};



// main function
int main()
{
      GfG ob;
     // ob.printMsg(); //not recommended
      cout<<endl;
    // invoking a static member function
     GfG::printMsg(); //standard and recommended

    return 0;
}
*/

