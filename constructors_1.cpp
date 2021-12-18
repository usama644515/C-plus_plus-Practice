#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        //Declare the constructor-------------
        //The constructor have same name with its class>---------------
        complex(void);
        void printnum(void){
            cout<<"The complex of these numbers is "<<a<<" + "<<b<<"i"<<endl;
        
        }
};
//define/Initilize the constructor----------
complex::complex(void){
    a=10;
    b=20;
}

int main(){
    complex c1,c2;
    //We can not call the contructor function because it can automatically called <----------------------
    c1.printnum();
    c2.printnum();
    return 0;

}