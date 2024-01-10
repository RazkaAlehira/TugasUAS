#include <iostream>
#include <iomanip>

// Fungsi untuk menghitung tagihan listrik
double hitungTagihan(double pemakaianKwh) {
    const double tarifBlok1 = 500.0;
    const double tarifBlok2 = 800.0;
    const double tarifBlok3 = 1000.0;
    const double biayaBeban = 30000.0;
    const double pajakPemakaian = 0.10;

    double biayaBlok1 = 0.0;
    double biayaBlok2 = 0.0;
    double biayaBlok3 = 0.0;

    // Menghitung biaya untuk setiap blok
    if (pemakaianKwh > 20.0) {
        biayaBlok1 = 20.0 * tarifBlok1;
        if (pemakaianKwh > 40.0) {
            biayaBlok2 = 20.0 * tarifBlok2;
            biayaBlok3 = (pemakaianKwh - 40.0) * tarifBlok3;
        } else {
            biayaBlok2 = (pemakaianKwh - 20.0) * tarifBlok2;
        }
    } else {
        biayaBlok1 = pemakaianKwh * tarifBlok1;
    }

    // Menghitung total biaya
    double totalBiaya = biayaBlok1 + biayaBlok2 + biayaBlok3 + biayaBeban;
    // Menghitung pajak pemakaian
    double totalTagihan = totalBiaya + (totalBiaya * pajakPemakaian);

    return totalTagihan;
}

int main() {
    std::string noRekening, namaPelanggan, bulan;
    double meterSebelum, meterSekarang, pemakaianKwh;

    // Input data pelanggan
    std::cout << "Masukkan nomor rekening: ";
    std::cin >> noRekening;

    std::cout << "Masukkan nama pelanggan: ";
    std::cin.ignore(); // Mengatasi masalah getline setelah cin
    std::getline(std::cin, namaPelanggan);

    std::cout << "Masukkan penunjuk meter bulanan sebelumnya: ";
    std::cin >> meterSebelum;

    std::cout << "Masukkan penunjuk meter bulan sekarang: ";
    std::cin >> meterSekarang;

    std::cout << "Masukkan bulan: ";
    std::cin >> bulan;

    // Menghitung pemakaian kWh
    pemakaianKwh = meterSekarang - meterSebelum;

    // Menghitung tagihan listrik
    double tagihan = hitungTagihan(pemakaianKwh);

    // Menampilkan hasil
    std::cout << "\nTagihan Listrik Bulan " << bulan << std::endl;
    std::cout << "Nomor Rekening: " << noRekening << std::endl;
    std::cout << "Nama Pelanggan: " << namaPelanggan << std::endl;
    std::cout << "Pemakaian kWh: " << std::fixed << std::setprecision(2) << pemakaianKwh << " kWh" << std::endl;
    std::cout << "Tagihan Listrik: Rp " << std::fixed << std::setprecision(2) << tagihan << std::endl;

    return 0;
}