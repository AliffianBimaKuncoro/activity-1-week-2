#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, pin;
    cout << "Masukan Username Anda: ";
    cin >> username;

    if (username == "ugo") {
        cout << "Masukan PIN: ";
        cin >> pin;
        if (pin.size() == 4) {
            cout << "Akses Anda Diterima" << endl;
        }
        else {
            cout << "PIN Invalid" << endl;
        }
    }
    else {
        cout << "Username Salah" << endl;
    }

    system("pause");
    return 0;
}