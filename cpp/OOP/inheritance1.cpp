#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Rectangle{
    public:
    int width;
    int height;
    void display(){
        cout<<width<<" "<<height<<endl;
    }
};

class RectangleArea : public Rectangle{
    public:
    void read_input(){
        cin>>width;
        cin>>height;
    }
    void display(){
        cout<<width*height<<endl;
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Rectangle* r1;
    RectangleArea a;
    r1=&a;
    a.read_input();
    r1->display();
    a.display();
    return 0;
}