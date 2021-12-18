#include<iostream>
using namespace std;


// --------------This is Recursive Function:---------------

int factorial(int a)
{
    if(a<=1){
        return 1;
    }
    return a * factorial(a-1);
}

int main(){

    int num;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    cout<<"The Facotrial of "<<num<<" is "<<factorial(num)<<endl;
    return 0;
}