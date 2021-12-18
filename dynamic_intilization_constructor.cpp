#include<iostream>
using namespace std;

class number{
    int num1,num2;
    float num3;
    public:
        number(){}
        number(int a, int b){
            num1=a;
            num2=b;
        }
        number(int a, float c){
            num1=a;
            num3=c;
        }
        void display(void){
            cout<<"The sum of These numbers is "<<num1+num2<<endl;
        }
        void display1(void){
            cout<<"The sum of these numbers is "<<num1+num3<<endl;
        }
};

int main(){
    number o1,o2;
    int x,y;
    float z;
    cout<<"Enter first no."<<endl;
    cin>>x;
    cout<<"Enter Second no."<<endl;
    cin>>y;
    o1=number(x,y);
    o1.display();

    cout<<"Enter first no."<<endl;
    cin>>x;
    cout<<"Enter second no."<<endl;
    cin>>z;
    o2=number(x,z);
    o2.display1();
    return 0;
}