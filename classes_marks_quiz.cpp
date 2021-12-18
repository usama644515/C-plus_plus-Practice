#include<iostream>
using namespace std;

class marks 
{
    private:
        int total, obtain;
    public:
        int urdu, english, islam, pakstudy,physics,maths,computer;

    void totalMarks(int total, int obtain);
    void obtainMarks(){
        cout<<"The marks in Urdu is "<<urdu<<endl;
        cout<<"The marks in English is "<<english<<endl;
        cout<<"The marks in Islamiyat is "<<islam<<endl;
        cout<<"The marks in Pakistan Study is "<<pakstudy<<endl;
        cout<<"The marks in Physics is "<<physics<<endl;
        cout<<"The marks in Mathematics is "<<maths<<endl;
        cout<<"The marks in Computer is "<<computer<<endl;
        cout<<"The Total Marks is "<<total<<endl;
        cout<<"The Obtain Marks is "<<obtain<<endl;
    }

};

void marks :: totalMarks(int a1,int a2){
    total=a1;
    obtain=a2;
}

int main(){
    marks student;
    student.urdu=100;
    student.english=200;
    student.islam=300;
    student.pakstudy=400;
    student.physics=500;
    student.maths=600;
    student.computer=700;
    student.totalMarks(11,22);
    student.obtainMarks();
    
    return 0;
}