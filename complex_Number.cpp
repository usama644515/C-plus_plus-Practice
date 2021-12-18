#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
        void getData(int v1,int v2){
            a=v1;
            b=v2;
        }
        void setData(complex o1,complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void printnum(){
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){
    complex c1,c2,c3;
    c1.getData(4,5);
    c1.printnum();

    c2.getData(3,6);
    c2.printnum();

    c3.setData(c1,c2);
    c3.printnum();
    return 0;
}