#include<iostream>
using namespace std;
int main()
{
    int marks[]={40,50,60,60};
    int a=0;
    do{
        cout<<"The marks of "<<a<<" is "<<marks[a]<<endl;
        a++;
    }while(a<4);
    return 0;
}