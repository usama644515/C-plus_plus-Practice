#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your Age:"<<endl;
    cin>>age;
    switch(age){
        case 18:
        cout<<"You are 18"<<endl;
        break;
        case 22:
        cout<<"You are 22"<<endl;
        break;
        case 10:
        cout<<"You are 10"<<endl;
        break;
        default:
        cout<<"No special Cases"<<endl;
        break;
    }
    return 0;
}