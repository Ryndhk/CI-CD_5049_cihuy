#include <iostream>
#include <string>
#include <limits> // Untuk numeric_limits

using namespace std;

int main() {
    int jawaban;
    int hasilSebenarnya = 3 + 5;

    cout << "Berapakah hasil " << 3 << " + " << 5 << "?" << endl;
    cout << "Jawab: ";
    cin >> jawaban;

    // Validasi input agar hanya menerima angka
    if (cin.fail()) {
        cout << "Input tidak valid. Harap masukkan angka." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1; // Keluar dengan kode error
    }

    string hasil;
    if (jawaban == hasilSebenarnya) {
        hasil = "benar";
    } else {
        hasil = "salah";
    }

    cout << "Jawaban anda: " << hasil << endl;

    return 0;
}
