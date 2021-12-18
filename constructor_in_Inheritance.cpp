#include<iostream>
using namespace std;
class Base1{
    int Data1;
    public:
        Base1(int data){
            Data1=data;
            cout<<"Base Class 1 Constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The Value of Data 1 is "<<Data1<<endl;
        }
};
class Base2{
    int Data2;
    public:
        Base2(int data){
            Data2=data;
            cout<<"Base Class 2 Construcotr called"<<endl;
        }
        void printDataBase2(void){
            cout<<"The Value of Data 2 is "<<Data2<<endl;
        }
};
class Derived: public Base1, public Base2{
    int Data3,Data4;
    public:
        Derived(int data1,int data2,int data3,int data4):Base1(data1),Base2(data2){ //Sepecial formula for Inheritance Constructor
            Data3=data3;
            Data4=data4;
            cout<<"Derived Class Constructor called"<<endl;
        }
        void printDataDerived(void){
            cout<<"The First value of Derived class is "<<Data3<<endl;
            cout<<"The Second value of Derived class is "<<Data4<<endl;
        }
};
int main(){
    Derived obj(1,2,3,4);
    obj.printDataBase1();
    obj.printDataBase2();
    obj.printDataDerived();
    return 0;
}