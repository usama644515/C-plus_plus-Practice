#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];  //-------create arrays-------
    int counter;
    public:
        void Counter(){
            counter=0;   //-----initilization of variable------
        }
        void setPrice();
        void display();
};

void shop::setPrice(){
    cout<<"Enter the Id of Item "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the Price of Item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::display(){
    for(int i=0; i<counter; i++){
        cout<<"The price of Item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    shop dukaan;
    dukaan.Counter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.display();
    return 0;
}