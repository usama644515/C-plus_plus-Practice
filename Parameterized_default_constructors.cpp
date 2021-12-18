#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex();//Declare the default constructor(--------Which have no parameter--------)
        void printnum(); //Declare the function:
        complex(int a, int b);// Declare the paramertrized constructor(------Which have parameters--------)
        complex(int a); // Decalre the parametrized constructor (-----This is constructor overloading--------)
        // Constructor Overloading(----thats like function overloading, we can use multiple constructors with 
        //same name. The compiler can detect it by arguments----------)

};
complex::complex(){
    a=10;
    b=20;
}
complex::complex(int x, int y){
    a=x;
    b=y;
}
complex::complex(int x){
    a=x;
    b=20;
}
void complex::printnum(){
    cout<<"The Complex number is "<<a<<" + "<<b<<"i"<<endl;
}

int main(){
    complex o1;
    o1.printnum(); //--------Default Constructor-----------

    complex o2(2,5);
    o2.printnum(); // --------implicit invoke/call of parametrized constructor----------

    complex o3=complex(4);
    o3.printnum(); //Explicit invoke of parametrized constructor--------

    return 0;
}