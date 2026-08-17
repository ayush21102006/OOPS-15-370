#include <bits/stdc++.h>
using namespace std;

void callByValue(int x) {
    x = x + 10;
    cout << x << endl;
}

void callByReference(int &x) {
    x = x + 10;
    cout << x << endl;
}

void callByAddress (int *x) {
    *x = *x + 10;
    cout << *x << endl;
}

int main() {
    int a = 10;
    cout << a << endl;

    callByValue(a);
    cout << a << endl;

    callByReference(a);
    cout << a << endl;

    callByAddress(&a);
    cout << a << endl;

    return 0;
}
