#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Kalkulator dua variabel (penjumlahan dan pengurangan)\n";
    cout << "Masukkan angka pertama: ";
    if(!(cin >> a)) return 0;
    cout << "Masukkan operator (+ atau -): ";
    cin >> op;
    cout << "Masukkan angka kedua: ";
    if(!(cin >> b)) return 0;

    if(op == '+') {
        cout << "Hasil: " << (a + b) << '\n';
    } else if(op == '-') {
        cout << "Hasil: " << (a - b) << '\n';
    } else {
        cout << "Operator tidak dikenal. Gunakan + atau -." << '\n';
    }

    return 0;
}
