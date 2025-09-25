#include <iostream>
using namespace std;

int main() {
    int X, m;
    cout << "Input Nilai X: ";
    cin >> X;
    m = X % 2;

    if (X < 1) {
        cout << "User salah Input" << endl;
    }
    else if (X != 2 && m == 0) {
        cout << X << " pasti bukan bilangan Prima" << endl;
    }
    else {
        cout << X << " mungkin bilangan Prima" << endl;
    }

    system("pause");
    return 0;
}