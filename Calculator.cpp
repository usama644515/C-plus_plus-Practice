#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class SimpleCalculator{
    protected:
        int val1,val2;
    public:
        void getValue1(int value1,int value2){
            val1=value1;
            val2=value2;
        }
        void displaySum(){
            cout<<"The Sum of these Values = "<<val1+val2<<endl;   
        }
        void displaySub(){
            cout<<"The Difference between these Values = "<<val1-val2<<endl;
        }
        void displayMul(){
            cout<<"The Multiplication of these Values = "<<val1*val2<<endl;
        }
        void displayDiv(){
            cout<<"The Division of these Values = "<<val1/val2<<endl;
        }
};
class ScientificCalculator{
    protected:
        int value;
    public:
        void getValue2(int val){
            value=val;
        }
        void displayCos(){
            cout<<"The Cos of this value = "<<cos(value)<<endl;
        }
        void displaySin(){
            cout<<"The Sin of this value = "<<sin(value)<<endl;
        }
        void displayTan(){
            cout<<"The Tan of this value = "<<tan(value)<<endl;
        }
};
class HybridCalculator:public SimpleCalculator, public ScientificCalculator{
};

int main(){
    HybridCalculator user;
    cout<<"Write 1 for Simple Calculator"<<endl<<"Write 2 for Scientific Calculator"<<endl;
    int cal_choose;
    int a,b;
    string c,d;
    cin>>cal_choose;
    if(cal_choose==1){
        cout<<"Write any one"<<endl<<"+ for Addition\n- for Subtraction\n* for Multiplication\n/ for Division\n";
        cin>>c;
        if(c=="+"){
            cout<<"Enter First Value"<<endl;
            cin>>a;
            cout<<"Enter Second Value"<<endl;
            cin>>b;
            user.getValue1(a,b);
            user.displaySum();
        }
        else if(c=="-"){
            cout<<"Enter First Value"<<endl;
            cin>>a;
            cout<<"Enter Second Value"<<endl;
            cin>>b;
            user.getValue1(a,b);
            user.displaySub();
        }
        else if(c=="*"){
            cout<<"Enter First Value"<<endl;
            cin>>a;
            cout<<"Enter Second Value"<<endl;
            cin>>b;
            user.getValue1(a,b);
            user.displayMul();
        }
        else if(c=="/"){
            cout<<"Enter First Value"<<endl;
            cin>>a;
            cout<<"Enter Second Value"<<endl;
            cin>>b;
            user.getValue1(a,b);
            user.displayDiv();
        }
        
    }
    else if(cal_choose==2){
        cout<<"Write any one\nsin for Sin\ncos for Cos\ntan for Tan\n";
        cin>>d;
        if(d=="sin"){
            cout<<"Enter First Value"<<endl;
            cin>>a;
            user.getValue2(a);
            user.displaySin();
        }
        
        else if(d=="cos"){
            cout<<"Enter First Value"<<endl;
            cin>>a;
            user.getValue2(a);
            user.displayCos();
        }
        
        else if(d=="tan"){
            cout<<"Enter First Value"<<endl;
            cin>>a;
            user.getValue2(a);
            user.displayTan();
        }
        else{
            cout<<"Invalid Input"<<endl;
        }
    }
    return 0;
}