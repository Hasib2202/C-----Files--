#include<iostream>
using namespace std;

//templated function
template<typename T>
T maxV(T x,T y){
    if(x>y){return x;}
    else {return y;}
}

template<typename T>
T minV(T x,T y){
    if(x<y){return x;}
    else {return y;}
}

template<typename R,typename F,typename S>
R sum(F op1, S op2){
    return op1+op2;
}

//templated class
template<typename X,typename Y>
class Point{
private:
    X x;
    Y y;
public:
    Point(X x,Y y){
        this->x=x;
        this->y=y;
    }
    void showPoint(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }

};


int main(){

    //for method/function template should be mentioned after method name
    cout<<maxV<char>('A','a')<<endl;
    cout<<maxV<double>(8.7,6.9)<<endl;
    cout<<maxV<int>(8,6)<<endl;

    cout<<minV<char>('B','b')<<endl;

    cout<<sum<float,float,float>(65.6,1)<<endl;


    //for class, template should be mentioned after class name
    Point<int,int> p(4,5);
    p.showPoint();

return 0;
}
