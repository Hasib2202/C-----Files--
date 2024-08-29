#include <iostream>
using namespace std;

int main()
{
    int x=10; //non-constant variable
    x=20; //no error
    cout<<x<<endl;

    int z;
    cin>>z;
    //constant variable
    const int y=z; //initialization is must with declaration

    //y++; //error

    //constant variable
    const int w=40; //initialization is must with declaration
    // y=50; //error
    cout<<w<<endl;


    return 0;
}
