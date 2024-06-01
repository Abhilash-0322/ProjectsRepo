#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x,y;
    friend void distance(Point ,Point);
    public:
        Point(int a,int b){
            x=a;
            y=b;
        }
        void display(){
            cout<<"The point is:"<<x<<","<<y<<endl;
        }
};

void distance(Point a,Point b){
    int measure=sqrt(pow((a.x)-(b.x),2)+pow((a.y)-(b.y),2));
    cout<<"The distance between the points:"<<measure<<endl;
}

int main(){
    Point p(9,1);
    p.display();
    Point q(4,3);
    q.display();
    distance(p,q);
    return 0;
}