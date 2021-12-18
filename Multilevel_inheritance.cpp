#include<iostream>
using namespace std;

class student{
    protected:
        int rollNumber;
    public:
        void setRollNumber(int);
        void getRollNumber(void);
};

void student::setRollNumber(int r){
    rollNumber=r;
}

void student::getRollNumber(){
    cout<<"The Roll Number is "<<rollNumber<<endl;
}

class exam:public student{
    protected:
        int maths;
        int computer;
    public:
        void setMarks(int,int);
        void getMarks(void);
};

void exam::setMarks(int m,int c){
    maths=m;
    computer=c;
}

void exam::getMarks(){
    cout<<"Your Maths Marks = "<<maths<<endl;
    cout<<"Your Computer Marks = "<<computer<<endl;
    cout<<"Your Total Marks are "<<maths+computer<<endl;
}

class percentage:public exam{
    public:
        void display(){
            int obtain=maths+computer;
            int total=200;
            getRollNumber();
            getMarks();
            cout<<"The Percentage = "<<float((obtain*100)/total)<<"%"<<endl;
        }
};

int main(){
    percentage usama;
    usama.setRollNumber(122);
    usama.setMarks(80,90);
    usama.display();
    return 0;
}