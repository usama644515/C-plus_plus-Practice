#include<iostream>
using namespace std;
    //    User Defined Data Types
            // We can use all Data Tpyes in Structure
struct example1
{
    int a1;
    char a2;
    float a3;
};
                // We can use only one data type in Union. 
union example2
{
    int b1;
    char b2;
    float b3;
};



int main()
{
    // All the results of data Types are right
    struct example1 usama;
    usama.a1=25;
    usama.a2='F';
    usama.a3=12.5;
    cout<<usama.a1<<endl<<usama.a2<<endl<<usama.a3<<endl;

    // only last used data type result are true because we can use only one at a time
    union example2 saad;
    saad.b1=30;
    saad.b2='h';
    saad.b3=15.2;
    cout<<saad.b1<<endl<<saad.b2<<endl<<saad.b3<<endl;
    return 0;
}