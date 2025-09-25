#include <iostream>
using namespace std;

int main() {
    int a, x, y;
    cout << "Pilih Menu (1 = Tambah , 2= Kurang , 3 = Kali , 4 = Bagi) " << endl;
    cout << "Pilih (1/2/3/4): ";
    cin >> a;
    cout << "Input Angka yang ingin Anda Operasikan (Pisahkan dengan Spasi): ";
    cin >> x >> y;

    switch (a) {
        case 1:
            cout << "Hasil: " << (x + y) << endl;
            break;
        case 2:
            cout << "Hasil: " << (x - y) << endl;
            break;
        case 3:
            cout << "Hasil: " << (x * y) << endl;
            break;
        case 4:
            switch (y) {
                case 0:
                    cout << "Hasil Tidak Terdefinisi" << endl;
                    break;
                default:
                    cout << "Hasil: " << (x / y) << endl;
                    break;
            }
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
    }

    system("pause");
    return 0;
}