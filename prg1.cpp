#include <iostream>
using namespace std;

class Student {
    int roll_no;
    string name;
    float marks;

public:
    void input() {
        cin >> roll_no;
        cin >> name;
        cin >> marks;
    }

    void display() {
        cout << roll_no << endl;
        cout << name << endl;
        cout << marks << endl;
    }
};

int main() {
    Student S;
    S.input();
    S.display();
    return 0;
}
