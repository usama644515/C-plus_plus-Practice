#include<iostream>
using namespace std;
class Base1{
    protected:
        int base1;
    public:
        void get_base1(int a){
            base1=a;
        }
};
class Base2{
    protected:
        int base2;
    public:
        void get_base2(int a){
            base2=a;
        }
};

class Derived:public Base1,public Base2{
    public:
        void show(){
            cout<<"The value of Base Class 1 is "<<base1<<endl;
            cout<<"The value of Base Class 2 is "<<base2<<endl;
            cout<<"The Sum of these classes is "<<base1+base2<<endl;
        }
};

int main(){
    Derived usama;
    int value1,value2;
    cout<<"Enter the first Value"<<endl;
    cin>>value1;
    cout<<"Enter the Second Value"<<endl;
    cin>>value2;
    usama.get_base1(value1);
    usama.get_base2(value2);
    usama.show();
    return 0;
}