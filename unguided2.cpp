#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk mengecek apakah sebuah karakter adalah huruf vokal
bool isVokal(char ch) {
    ch = tolower(ch); // Mengubah huruf menjadi huruf kecil untuk memudahkan pengecekan
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string kalimat;
    int jumlahVokal = 0;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    // Iterasi melalui setiap karakter dalam kalimat
    for (char ch : kalimat) {
        if (isVokal(ch)) {
            jumlahVokal++;
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << endl;

    return 0;
}
