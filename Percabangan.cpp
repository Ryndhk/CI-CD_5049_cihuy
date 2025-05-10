#include <iostream>
#include <string>

using namespace std;

int main() {
    int jawaban;
    int hasilSebenarnya = 3 + 5;

    cout << "=======================================" << endl;
    cout << "         PERTANYAAN MATEMATIKA         " << endl;
    cout << "=======================================" << endl;
    cout << "Berapakah hasil dari " << 3 << " + " << 5 << "? Silakan jawab: ";
    cin >> jawaban;

    string hasil;
    if (jawaban == hasilSebenarnya) {
        hasil = "? Selamat! Jawaban Anda benar. ?";
    } else {
        hasil = "? Maaf, jawaban Anda salah. Hasil yang benar adalah " << hasilSebenarnya << ". ?";
    }

    cout << "---------------------------------------" << endl;
    cout << "Hasil Pemeriksaan: " << hasil << endl;
    cout << "---------------------------------------" << endl;

    return 0;
}
