#include <iostream>
using namespace std;

int main() {
    int X;
    cout << "Input Nilai X: ";
    cin >> X;

    if (X >= 80) {
        cout << "Selamat Anda Mendapatkan Nilai A" << endl;
    }
    else if (X < 80 && X >= 60) {
        cout << "Selamat Anda Mendapatkan Nilai B" << endl;
    }
    else if (X < 60 && X >= 40) {
        cout << "Anda Mendapatkan Nilai C" << endl;
    }
    else if (X < 40 && X >= 20) {
        cout << "Anda Mendapatkan Nilai D" << endl;
    }
    else if (X < 20 && X >= 0) {
        cout << "Anda Mendapatkan Nilai E" << endl;
    }
    else {
        cout << "MAAF ANGKA YANG ANDA INPUT TIDAK VALID" << endl;
    }

    system("pause");
    return 0;
}