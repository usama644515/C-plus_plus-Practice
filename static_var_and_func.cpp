#include<iostream>
using namespace std;

class Employee{
    int id;
    static int counter;  //------Static Variable------------
    public:
        
        void getData(void){
            cout<<"Enter the Id"<<endl;
            cin>>id;
        }
        void setData(void){
            cout<<"The of Id of this employee is "<<id<<" with "<<counter<<endl;
            counter++;
        }

        //--------Static Function-----which hold only static variable----------
        static void Counter(void){
            cout<<"The counter of this is "<<counter<<endl;
        }
};

int Employee::counter;  //By default value is zero------

int main(){
    Employee Usama,Saad,Mudasir;
    Usama.getData();
    Usama.setData();
    Employee::Counter();

    Saad.getData();
    Saad.setData();
    Employee::Counter();

    Mudasir.getData();
    Mudasir.setData();
    Employee::Counter();
    return 0;
}