#include<iostream>
using namespace std;
class Student{
    protected:
        int Roll_No;
    public:
        void get_rollno(int roll){
            Roll_No=roll;
        }
        void print_rollno(void){
            cout<<"Your Roll No is "<<Roll_No<<endl;
        }
};
class Marks:virtual public Student{
    protected:
        float maths,computer;
    public:
        void get_marks(float m, float c){
            maths=m;
            computer=c;
        }
        void print_marks(void){
            cout<<"Your Marks in Maths = "<<maths<<endl<<"Your Marks in Computer = "<<computer<<endl;
        }
};
class Sports: virtual public Student{
    protected:
        float score;
    public:
        void get_score(float s){
            score=s;
        }
        void print_score(void){
            cout<<"Your Sports Score = "<<score<<endl;
        }
};
class Result:public Marks,public Sports{
    private:
        int total;
    public:
        total=maths+computer+score;
        void result(void){
            print_rollno();
            print_marks();
            print_score();
            cout<<"Your Total Result = "<<total<<endl;
        }
};

int main(){
    Result usama;
    usama.get_rollno(12);
    usama.get_marks(75,90);
    usama.get_score(8);
    usama.result();
    return 0;
}