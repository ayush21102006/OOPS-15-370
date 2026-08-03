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
};

int main(){
    Point p,q(20,50);
    p.show();
    q.show();
    return 0;
}