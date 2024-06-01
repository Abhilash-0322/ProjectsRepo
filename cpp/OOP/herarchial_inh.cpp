#include<iostream>
using namespace std;

class Ground{
    int Room;
    protected:
        void put(){
            cout<<"Function for putting";
        }
    public:
        void get(){
            cout<<"We got It";
        }
};
class Middle:private Ground{
    int Labs;
    public:
        void take(){
            cout<<"Function for taking";
        }
};

class Top:public Middle{
    int Roof;
public:
    void In(){
        cout<<"For Taking In";
    };
    void Out(){
        cout<<"For Taking Out";
    };
};

int main(){
    
    return 0;
}