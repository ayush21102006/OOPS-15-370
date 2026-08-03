/*Create a point class with two private parameters and show them with constructor*/
#include<bits/stdc++.h>
using namespace std;

class Point{
    private:
    int x;
    int y;
    public:
    Point(int a ,int b){
        x=a;
        y=b;
    }

    void show(){
        cout<<"X coordinate: "<<x<<endl;
        cout<<"Y coordinate: "<<y<<endl;
    }
};

int main(){
    int a,b;
    cout<<"Enter x coordinate: ";
    cin>>a;
    cout<<"Enter y coordinate: ";
    cin>>b;
    Point p1(a,b);
    p1.show();
}