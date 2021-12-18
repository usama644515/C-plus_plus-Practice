#include<iostream>
#include<string>
using namespace std;

class binary
{
    //by default private------------
    string s;
    void check_binary(void);
public:
    void getbinary(void);
    void ones_complement(void);
    void display(void);
        
};
void binary::getbinary(){
    cout<<"Enter the Binary Value"<<endl;
    cin>>s;
}

void binary::check_binary(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"This is not Binary Values"<<endl;
            exit(0);
        }
    }
}

void binary::ones_complement(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary::display(){
    check_binary();  //---- This is nesting of member:
    for(int i=0; i<s.length(); i++){
    cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{   
    binary num;
    num.getbinary();
    // num.check_binary();   <------ this is private member------>
    num.display();
    num.ones_complement();
    num.display();
    return 0;
}