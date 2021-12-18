// By While Loop:
#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the Number of Table"<<endl;
    cin>>num;
    while(i<=10){
        cout<< num <<" X "<< i <<" = "<< num*i <<endl;
        i++;
    }
    return 0;
}