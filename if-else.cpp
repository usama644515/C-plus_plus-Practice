#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your Age:"<<endl;
    cin>>age;
    if(age<18){
        cout<<"You can not come in my party:"<<endl;
    }
    else if(age==18){
        cout<<"You can come in my party by kids pass:"<<endl;
    }
    else{
        cout<<"You can come in my party:"<<endl;
    }
    return 0;
}