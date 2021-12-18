#include<iostream>
using namespace std;

// Functions------
int func1(int a, int b)
{
    int c= a+b;
    return c;
}
// Function Prototype-----
int func2(int , int);

void func3();

int main(){
    int num1,num2;
    cout<<"Enter the first Number"<<endl;
    cin>>num1;
    cout<<"Enter the Second Number"<<endl;
    cin>>num2;
    // function call-------
    int sum=func1(num1,num2); 
    cout<<"The sum of These Numbers is "<<sum<<endl;
                        // OR----
    cout<<"The sum of these Numbers is "<<func1(num1,num2)<<endl;

    cout<<"The Multiplication of these Numbers is "<<func2(num1, num2)<<endl;

    func3();

    return 0;
}

int func2(int x, int y)
{
    int z=x*y;
    return z;
}

// --------Void function have no return value----------

void func3(){
    cout<<"Hello world"<<endl;
}