#include <iostream>
using namespace std;

int x, m, prima = 2;

int main() {
    cout << "Input Nilai X (X<200): ";
    cin >> x;
    m = x % prima;

    if (x < 200) {
        if (m != 0) {
            prima = 3;
            m = x % prima;
            if (m != 0) {
                prima = 5;
                m = x % prima;
                if (m != 0) {
                    prima = 7;
                    m = x % prima;
                    if (m != 0) {
                        prima = 11;
                        m = x % prima;
                        if (m != 0) {
                            prima = 13;
                            m = x % prima;
                            if (m != 0) {
                                cout << x << " adalah bilangan prima" << endl;
                            }
                            else {
                                cout << x << " bukan bilangan prima" << endl;
                            }
                        }
                        else {
                            cout << x << " bukan bilangan prima" << endl;
                        }
                    }
                    else {
                        cout << x << " bukan bilangan prima" << endl;
                    }
                }
                else {
                    cout << x << " bukan bilangan prima" << endl;
                }
            }
            else {
                cout << x << " bukan bilangan prima" << endl;
            }
        }
        else {
            cout << x << " bukan bilangan prima" << endl;
        }
    }
    else {
        cout << "Nilai tidak dapat dipastikan" << endl;
    }

    system("pause");
    return 0;
}