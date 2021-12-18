#include<iostream>
using namespace std;

class Base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};
void Base::setData(){
    data1=10;
    data2=20;
}
int Base::getData1(){
    return data1;
}
int Base::getData2(){
    return data2;
}
//create the derived class----------
class Derived:public Base{ 
    int data3;
    public:
        void process();
        void display();
};
void Derived::process(){
    data3=data2*getData1(); //We can use getData1() function because data1 
    // is the private member of base class, so it cannot inheritable------

}
void Derived::display(){
    cout<<"The Fisrt Data Value is "<<getData1()<<endl;
    cout<<"The Second Data Value is "<<data2<<endl;
    cout<<"The Third Data Value is "<<data3<<endl;
}

int main(){
    Derived dr1;
    dr1.setData();
    dr1.process();
    dr1.display();
    return 0;
}