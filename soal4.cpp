#include <iostream>
using namespace std;

int main() {
    int x, m;
    cout << "Masukan Angka: ";
    cin >> x;
    m = x % 2;

    if (x == 0) {
        cout << "Angka Anda 0" << endl;
    }
    else if (x > 0) {
        cout << "Angka Anda Adalah Positif " << endl;
        if (m == 0) {
            cout << "Angka Anda Adalah Genap " << endl;
        }
        else {
            cout << "Angka Anda Adalah Ganjil " << endl;
        }
    }
    else if (x < 0) {
        cout << "Angka Anda Adalah Negatif " << endl;
        if (m == 0) {
            cout << "Angka Anda Adalah Genap " << endl;
        }
        else {
            cout << "Angka Anda Adalah Ganjil " << endl;
        }
    }

    system("pause");
    return 0;
}