#include<iostream>
using namespace std;

int main(){

    // for(initialization; condition; update){ body }
    /*
        1. initialization
        2. condition
        3. if condition is true then go to for's body
        4. when for's body is completed control goes to update
        5. after update go to condition
        6. if condition is true go to step 3
        7. if condition is false loop is exited

    */





    int number;
    int i;
    cin>>number;
    for(i=number;i>=0 ;i-- ){
        if(i%2==0){
        cout<<i<< " is even"<<endl;
        }
        else{
            cout<<i<< " is odd"<<endl;
        }
    }

    //while(condition){ body }


    //to use while initialization is done outside loop
    i=0;
    while(i<=number){
        if(i%2==0){
        cout<<i<< " is even"<<endl;
        }
        else{
            cout<<i<< " is odd"<<endl;
        }

        //update is done inside loop
        i++;
    }



return 0;
}
