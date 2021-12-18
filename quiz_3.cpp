// By Do While Loop:
#include<iostream>
using namespace std;
int main()
{
    int num, i;
    cout<<"Enter the Number of Table"<<endl;
    cin>>num;
    do{
        cout<< num <<" X "<< i <<" = "<< num*i <<endl;
        i++;
    }while(i<=10);
    return 0;
}