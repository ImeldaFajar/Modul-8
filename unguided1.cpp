#include <iostream>
#include <string>
#include <algorithm> // Untuk sort
using namespace std;

void binary_search(const string &sorted_str, char cari)
{
    int awal = 0;
    int akhir = sorted_str.length() - 1;
    int tengah;
    bool b_flag = false;

    while (awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (sorted_str[tengah] == cari)
        {
            b_flag = true;
            break;
        }
        else if (sorted_str[tengah] < cari)
        {
            awal = tengah + 1;
        }
        else
        {
            akhir = tengah - 1;
        }
    }

    if (b_flag)
    {
        cout << "\n Huruf '" << cari << "' ditemukan pada index ke-" << tengah << " setelah pengurutan.\n";
    }
    else
    {
        cout << "\n Huruf '" << cari << "' tidak ditemukan.\n";
    }
}

int main()
{
    string kalimat;
    char cari;

    cout << "\t BINARY SEARCH PADA KALIMAT" << endl;
    cout << "\n Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "\n Masukkan huruf yang ingin Anda cari: ";
    cin >> cari;

    // Menghapus spasi dari kalimat untuk tujuan pencarian
    kalimat.erase(remove(kalimat.begin(), kalimat.end(), ' '), kalimat.end());

    // Mengurutkan kalimat
    sort(kalimat.begin(), kalimat.end());

    cout << "\n Kalimat setelah diurutkan: " << kalimat << endl;

    binary_search(kalimat, cari);

    return 0;
}
