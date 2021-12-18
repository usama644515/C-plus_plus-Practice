#include<iostream>
using namespace std;
//Forward declaration of the class---------
class complex;

class calculator{
    public:
        int sumreal(complex, complex);

        int sumcomplex(complex,complex);
};

class complex{
    int a,b;
    public:
        //Friend the other class functions:
        // friend int calculator::sumreal(complex,complex);
        // friend int calculator::sumcomplex(complex,complex);
        // ---------------------OR---------------------------
        //Friend the full entire class.so we can access the all function of the friend class:
        friend class calculator;
        void getValue(int v1, int v2){
            a=v1;
            b=v2;
        }
        void printcomplex(){
            cout<<"The complex number is "<<a<<" + "<<b<<" i"<<endl;
        }

};



int calculator::sumreal(complex o1,complex o2){
    return (o1.a+o2.a);
}

int calculator::sumcomplex(complex o1,complex o2){
    return (o1.b+o2.b);
}

int main(){
    //First Class Objects-----------
    complex a1,a2;
    a1.getValue(4,6);
    a1.printcomplex();

    a2.getValue(7,8);
    a2.printcomplex();
    //Second Class Objects-----------
    calculator a;
    int x=a.sumreal(a1,a2);
    int y=a.sumcomplex(a1,a2);
    cout<<"The sum of real part is "<<x<<endl;
    cout<<"The sum of complex part is "<<y<<endl;
    return 0;
}

