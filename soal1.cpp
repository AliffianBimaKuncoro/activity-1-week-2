#include <iostream>
#include <string>
using namespace std;

string a = "Gelas Kopi", b = "Gelas Teh", c = "Gelas Kosong";

int main() {
    c = a;
    a = b;
    b = c;
    c = "Gelas Kosong"; // mengembalikan c menjadi gelas kosong

    cout << "Gelas A: " << a << endl;
    cout << "Gelas B: " << b << endl;
    cout << "Gelas C: " << c << endl;

    system("pause");
    return 0;
}