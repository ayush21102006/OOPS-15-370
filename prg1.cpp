#include <iostream>
using namespace std;
class Student{
    private:
    int RollNo;
    string Name;
    float marks;
    public:
    void input(){
    cout << "Enter Roll Number: ";
        cin >> RollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, Name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display(){
        cout<<"Student Details:"<<endl;
        cout<<"Name:"<<Name<<endl;
        cout<<"Roll Number:"<<RollNo<<endl;
        cout<<"Marks:"<<marks;
    }
    void updateMarks(float newMarks) {
        marks = newMarks;
    }

};

int main() {
    Student s1;

    s1.input();
    s1.display();
     float newMarks;
    cout << "\nEnter new marks to update: ";
    cin >> newMarks;

    s1.updateMarks(newMarks);

    cout << "\nUpdated Record:" << endl;
    s1.display();
}