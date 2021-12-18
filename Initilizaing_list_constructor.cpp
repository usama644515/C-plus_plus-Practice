#include<iostream>
using namespace std;
class Test{
    int a,b;
    public:
        Test(int x, int y):a(x), b(y){
            cout<<"The Value of a is "<<a<<endl;
            cout<<"The Value of b is "<<b<<endl;
        }
        // ---------Both Result are Same-------------
        
        // Test(int x, int y){
        //     a=x;
        //     b=y;
        //     cout<<"The Value of a is "<<a<<endl;
        //     cout<<"The Value of b is "<<b<<endl;
        // }

};

int main(){
    Test t(4,6);
    return 0;
}