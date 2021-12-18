#include<iostream>
using namespace std;

class subject{
    static int count;   //---------Static Variable:-----------
    int a;
    public:
        void getData(){
            cout<<"Enter the id"<<endl;
            cin>>a;
        }
        void setData(){
            cout<<"The id of this subject is "<<a<<" with count is "<<count<<endl;
            count++;
        }

};

int subject::count=1; //--------initilize the static variable because default value is zero:--------------

int main(){
    subject abc[5]; //--------create the array of objects-------
    //-------------We can use this in loop:---------------
    for(int i=0; i<5; i++){
    abc[0].getData();
    abc[0].setData();
    }
    return 0;
}