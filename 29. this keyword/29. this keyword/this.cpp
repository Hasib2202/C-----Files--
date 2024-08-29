#include<iostream>
using namespace std;

/*
//Accessing the currently executing object using this keyword
class A
{
    public:
        void message()
        {
            cout<< "Hello from class A"<<endl;
            cout<< this<<endl;
        }
};

int main()
{
    A ob, ob1;
    ob.message();

    ob1.message();


    return 0;
}
*/


/*
//Accessing the data members through this keyword
class A
{
    private:
        int a=10;

    public:
        void message()
        {
            cout<< "Hello from class A" <<endl;
            cout<<this->a;
        }
};


int main()
{
    A ob;
    ob.message();

    return 0;
}
*/



/*
//Calling a member function using this keyword
class A
{
    private:
        int a=10;

    public:
        void message();

        void hello();

};

//Definition of message() function of A class
void A :: message()
{
    cout<< "Hello from class A" <<endl;
    this->hello();
}

//Definition of hello() function of A class
void A :: hello()
{
    cout<< "Hello" << endl;
    cout<< "Welcome" << endl;
}


int main()
{
    A ob;
    ob.message();

    return 0;
}
*/



/*
//When local variable’s name is same as member’s name

class A
{
    public:
        int a; //instance variable, a

        void putValue(int a)	//local variable, a
        {
             a=a;
        }
};


int main()
{
    A ob;

    //passing 10 to putValue() function, for 10 to be stored in data member a
    ob.putValue(10);

    //accessing the value of data member, a
    cout<<"Value in a is: "<<ob.a;
    return 0;
}
*/



/*
//When local variable’s name is same as member’s name
class A
{
    public:
        int a;

        void putValue(int a)
        {
            //accessing a data member with this keyword,
            //to differ it from a local variable with same name
            this->a = a;
        }
};


int main()
{
    A ob;
    ob.putValue(10);
    cout<< "Value in a : " << ob.a;

    return 0;
}
*/

