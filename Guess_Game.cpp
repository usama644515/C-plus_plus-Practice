#include<iostream>
#include<string>
using namespace std;

class guess_game{
        int num=13;
    public:
        int a;
        void welcome();
        void getnumber();
        void check();

};

void guess_game::getnumber(){
    
    cout<<"Enter a Number"<<endl;
    cin>>a;
}

void guess_game::check(){
    while(true){
        if(num==a){
            cout<<"You Won"<<endl;
        }
        else{
            cout<<"Try Again"<<endl;
        }
        break;
    }
}

void guess_game::welcome(){
    cout<<"Welcome to the Game"<<endl;
    cout<<"Guess the Number Between 0 to 15"<<endl;
}


int main(){
    guess_game name;
    name.welcome();
    name.getnumber();
    name.check();
    return 0;
}