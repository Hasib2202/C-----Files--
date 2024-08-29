#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1="Rahim",str2=" Karim";
    string str3,str4;
    int len;

    str3=str1;
    cout<<str3<<endl;

    str3=str1+str2;
    cout<<"str1+str2 is:"<<str3<<endl;

    str4=str2+str1;
    cout<<"str2+str1 is:"<<str4<<endl;

    len=str3.size();
    cout<<"Length of str3 is:"<<len<<endl;



    return 0;
}
