#include<iostream>
using namespace std;

class simple{
    int a,b;
    public:
        simple(){
            a=10;
            b=20;
        }
        simple(int num1,int num2=1){
            a=num1;
            b=num2;
        }
        
        void printnum(void){
            cout<<"The Numbers in Sum form is "<<a<<"+"<<b<<endl;
        }
};

int main(){
    simple o1;
    o1.printnum();

    // simple o2(2); //Default Arguments----------->>>
    simple o2(2,5);
    o2.printnum();

    return 0;    
}