#include<iostream>
using namespace std;

// Classes-------
class employee
{
    private:
        int a,b,c;
    public:
        int d,e;

    void setdata(int a,int b,int c); // Function Declaration----
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void employee :: setdata(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee usama;
    //usama.a=125;       This will throw error because this is private-----
    usama.d=34;
    usama.e=40;
    usama.setdata(3,4,5);
    usama.getdata();
    return 0;

}