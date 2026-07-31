#include<bits/stdc++.h>
using namespace std;

class Complex{

    private:
    int real,img;

    public:
    void input(){
        cin>>real>>img;
    }

    void show(){
        cout<<real;
        if(img>=0){
            cout<<"+"<<img<<"i"<<endl;
        }
        else{
            cout<<img<<"i"<<endl;
        }
    }
    void add(int a,int b){
        real=real+a;
        img=img+b;
    }
    void add(Complex p){
        real=real+p.real;
        img=img+p.img;
    }
    void add(Complex p , Complex q){
        real=p.real+q.real;
        img=p.img+q.img;
    }

    Complex addC(int a, int b){
        Complex m;
        m.real=real+a;
        m.img=img+b;
        return m;
    }
};

int main(){
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    c1.add(5,7);
    c1.show();
    c2.add(c1);
    c2.show();
    c3.add(c1,c2);
    c3.show();
    Complex q =c1.addC(5,10);
    q.show();
}