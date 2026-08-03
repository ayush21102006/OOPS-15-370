/*Create a point class with two private parameters and show them with constructor*/
#include<bits/stdc++.h>
using namespace std;

class Point{
    private:
    int x;
    int y;
    public:

    Point() : x{0},y{0}{
        cout<<"Default constructer "<<endl;
    }  //list initialization
    Point(int p,int q): x{p},y{q}{
        cout<<"Parameterized constructor "<<endl;
    }


    void show(){
        cout<<x<<" , "<<y<<endl;
        
    }

    // Point add (Point q){
    //     Point r;
    //     r.x=x+q.x;
    //     r.y=y+q.y;
    //     return r;
    // }
    Point add (Point q){                                  
        return Point(x + q.x , y + q.y);                  //nameless object creation
    }


};

int main(){
    Point p(10,20),q(20,50);
    p.show();
    q.show();
    Point r = p.add(q);
    r.show();
    return 0;
}