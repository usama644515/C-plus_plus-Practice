#include<iostream>
using namespace std;

// ------Calculate Volume of Cylinder----------

int volume(int r, int h)
{
    return (3.14*r*r*h);
}

//--------Calculate volume of Cube----------

int volume(int a)
{
    return(a*a*a);
}

//---------Calculate volume of Rectangular box---------

int volume(int l,int b, int h)
{
    return (l*b*h);
}

int main()
{
    cout<<"The Volume of cube is "<<volume(4)<<endl;
    cout<<"The Volume of Cylinder is "<<volume(3,5)<<endl;
    cout<<"The Volune of Rectangular box is "<<volume(3,4,5)<<endl;
    return 0;
}