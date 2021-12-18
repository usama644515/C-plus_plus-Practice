#include<iostream>
using namespace std;

class Base{
    int data1;
    public:
        int data2;
        void setData(){
            data1=10;
            data2=20;
        }
        
        int getData1(){
            return data1;
        }
        int getData2(){
            return data2;
        }
};

class Derived:private Base{
    int data3;
    public:
        void process(){
            setData(); //We can call this function because visibility mode is private-----
            data3=data2*getData1();//We can use getData1() function because data1 
                        // is the private member of base class, so it cannot inheritable------
        }
        void display(){
            cout<<"The Fisrt Data Value is "<<getData1()<<endl;
            cout<<"The Second Data Value is "<<data2<<endl;
            cout<<"The Third Data Value is "<<data3<<endl;
        }

};

int main(){
    Derived dr1;
    dr1.process();
    dr1.display();
    return 0;
}