#include<iostream>
using namespace std;

class complex{
        int a,b;
        public:
            void setValue(int v1,int v2){
                a=v1;
                b=v2;
            }
            void printnum(void);
            // -----Define the friend function in the class----------
            friend complex sumcomplex(complex o1,complex o2);
};

void complex::printnum(){
    cout<<"The Complex Number is "<<a<<" + "<<b<<" i"<<endl;
}
//---------------Friend Function----------------
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setValue((o1.a+o2.a),(o2.b+o2.a));
    return o3;
}

int main(){
    complex a1,a2,a3;
    a1.setValue(5,6);
    a1.printnum();

    a2.setValue(7,8);
    a2.printnum();

    a3=sumcomplex(a1,a2);
    a3.printnum();
    return 0;
}