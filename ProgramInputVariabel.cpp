#include <iostream>
#include <string>

int main() {
    // Input angka
    int angka;
    std::cout << "Masukkan sebuah angka = ";
    std::cin >> angka;

    // Input kata
    std::string kata;
    std::cout << "Masukkan sebuah kata = ";
    std::cin.ignore(); // Membersihkan buffer sebelum menggunakan getline
    std::getline(std::cin, kata);

    // Input kombinasi huruf dan angka
    std::string kombinasi;
    std::cout << "Masukkan kombinasi huruf dan angka = ";
    std::getline(std::cin, kombinasi);

    // Menampilkan hasil
    std::cout << "Angka yang Anda masukkan adalah " << angka << std::endl;
    std::cout << "Kata yang Anda masukkan adalah " << kata << std::endl;
    std::cout << "Huruf yang Anda masukkan adalah ";
    for (char huruf : kombinasi) {
        if (isalpha(huruf)) {
            std::cout << huruf << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}