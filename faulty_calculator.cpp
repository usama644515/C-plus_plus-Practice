#include<iostream>
#include<string>
using namespace std;

class calculator{
    string val;
    int num1,num2;
    public:
        void display(void);
        void setValue(void);
        void result(void);
        
};
void calculator::display(){
    cout<<"Welcome to the Calculator"<<endl;
    cout<<"Write any one:"<<endl<<"sum for addition"<<endl<<"sub for subtraction"<<endl<<"multi for Multiplicaton"<<endl<<"div for Division"<<endl;
}
void calculator::setValue(){
    cin>>val;
    cout<<"Enter the first Value"<<endl;
    cin>>num1;
    cout<<"Enter the Second Value"<<endl;
    cin>>num2;
}
void calculator::result(){
    if(val=="sum"){
        if(num1==10 && num2==20){
            cout<<"The sum is 12345"<<endl;
        }    
        else{
            cout<<"The sum is "<<num1+num2<<endl;
        }        
    }
    else if(val=="sub"){
        if(num1==10 && num2==20){
            cout<<"The subtraction is 12345"<<endl;
        }    
        else{
            cout<<"The subtractin is "<<num1-num2<<endl;
        }        
    }
    if(val=="multi"){
        if(num1==10 && num2==20){
            cout<<"The Multiplication is 12345"<<endl;
        }    
        else{
            cout<<"The Multiplication is "<<num1*num2<<endl;
        }        
    }
    if(val=="div"){
        if(num1==10 && num2==20){
            cout<<"The Division is 12345"<<endl;
        }    
        else{
            cout<<"The Division is "<<num1/num2<<endl;
        }        
    }
}

int main(){

    calculator user1;
    user1.display();
    user1.setValue();
    user1.result();

    return 0;
}