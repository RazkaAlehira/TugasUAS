#include <iostream>

int main() {
    // Data mobil
    double massaMobil = 100.0;  // dalam kilogram
    double kecepatanAwal = 0.0;  // kecepatan awal mobil dalam m/s
    double kecepatanAkhir = (100.0 * 1000.0) / 3600.0;  // kecepatan akhir mobil dalam m/s
    double waktu = 30.0 * 60.0;  // waktu dalam detik

    // Menghitung percepatan
    double percepatan = (kecepatanAkhir - kecepatanAwal) / waktu;

    // Menghitung gaya
    double gaya = massaMobil * percepatan;

    // Menampilkan hasil
    std::cout << "Massa mobil: " << massaMobil << " kg" << std::endl;
    std::cout << "Kecepatan awal: " << kecepatanAwal << " m/s" << std::endl;
    std::cout << "Kecepatan akhir: " << kecepatanAkhir << " m/s" << std::endl;
    std::cout << "Waktu: " << waktu << " detik" << std::endl;
    std::cout << "Percepatan: " << percepatan << " m/s^2" << std::endl;
    std::cout << "Gaya yang bekerja pada mobil: " << gaya << " N" << std::endl;

    return 0;
}