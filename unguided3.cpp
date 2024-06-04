#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int data[n] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int cari = 4;
    int jumlah = 0;

    // Algoritma Sequential Search untuk menghitung jumlah angka 4
    for (int i = 0; i < n; i++) {
        if (data[i] == cari) {
            jumlah++;
        }
    }

    cout << "\tProgram Menghitung Jumlah Angka 4 dengan Sequential Search\n" << endl;
    cout << "Data: {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    cout << "Angka " << cari << " muncul sebanyak " << jumlah << " kali." << endl;

    return 0;
}
