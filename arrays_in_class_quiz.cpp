#include<iostream>
#include<string>
using namespace std;

class record{
    string subject[10];
    int number[10];
    int counter;
    public:
        void Counter(){
            counter=0;
        }
        void set();
        void display();
        void result();
        void total();
};

void record::set(){
    cout<<"1. for Urdu"<<endl<<"2. for English"<<endl<<"3. for Computer"<<endl<<"4. for Mathematics"<<endl;
    cout<<"Enter the subject Name for Index: "<<counter+1<<endl;
    cin>>subject[counter];
    cout<<"Enter the Number to obtain this Subject"<<endl;
    cin>>number[counter];
    counter++;
}

void record::display(){
    for(int i=0; i<counter; i++){
        cout<<"The Obtain Marks in "<<subject[i]<<" is "<<number[i]<<"."<<endl;

    }
}

void record::total(){
    //---------add the all components of array through their indexes:---------------
    int a=number[0]+number[1]+number[2]+number[3];
    cout<<"The Total Marks is "<<a<<endl;
}

void record::result(){
    for(int i=1;i<=4; i++){
        set();  //------ this can call the function for i time:---------
    }
}
int main(){
    record usama;
    usama.Counter();
    usama.result(); //-------we can use loop for call the function repeatily----------
    usama.display();
    usama.total();
    return 0;
}