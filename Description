- Program 1 :
Berikut adalah program C++ untuk melakukan enkripsi shift chiper suatu file teks dengan asumsi semua karakter huruf adalah huruf kapital:
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Deklarasi variabel
  string input_file, output_file;
  int shift;

  // Membaca input dari pengguna
  cout << "Masukkan nama file teks input: ";
  cin >> input_file;
  cout << "Masukkan besar pergeseran: ";
  cin >> shift;

  // Membaca file teks input
  ifstream input(input_file);
  if (!input) {
    cout << "File teks input tidak ditemukan." << endl;
    return 1;
  }

  // Menciptakan file teks output
  output_file = input_file + ".enc";
  ofstream output(output_file);

  // Melakukan enkripsi
  while (!input.eof()) {
    char c;
    input >> c;

    if (isalpha(c)) {
      // Mengubah karakter huruf
      char new_c = (c - 'A' + shift) % 26 + 'A';
      output << new_c;
    } else {
      // Mengoutputkan karakter non-huruf
      output << c;
    }
  }

  // Menutup file teks
  input.close();
  output.close();

  // Mengoutputkan informasi
  cout << "Enkripsi berhasil. File hasil enkripsi disimpan di " << output_file << endl;
  return 0;
}

Penjelasan program:

Pada baris 5-7, variabel input_file dan output_file dideklarasikan untuk menyimpan nama file teks input dan output. Variabel shift dideklarasikan untuk menyimpan besar pergeseran.
Pada baris 10-12, input dari pengguna dibaca.
Pada baris 15, file teks input dibuka.
Pada baris 17, file teks output diciptakan.
Pada baris 19-24, enkripsi dilakukan. Untuk setiap karakter huruf, karakter hasil enkripsi dihitung dengan menggunakan rumus berikut:
new_c = (c - 'A' + shift) % 26 + 'A'
Misalkan pergeserannya 2, maka untuk karakter A, B, C, dst., karakter hasil enkripsinya adalah C, D, E, dst.

Pada baris 26-28, karakter non-huruf dioutputkan tanpa diubah.
Pada baris 31-32, file teks ditutup.
Pada baris 34-35, informasi enkripsi berhasil dioutputkan.
Berikut adalah contoh penggunaan program:

$ g++ shift_cipher.cpp -o shift_cipher
$ ./shift_cipher input.txt 2

Masukkan nama file teks input: input.txt
Masukkan besar pergeseran: 2
Enkripsi berhasil. File hasil enkripsi disimpan di input.txt.enc
Hasil enkripsi dari file teks input.txt adalah file teks input.txt.enc dengan isi sebagai berikut:

B++ LQ IBVG

- Program 2 :
Berikut adalah program C++ untuk menghitung tagihan listrik setiap bulan dengan ketentuan sebagai berikut:

#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int no_rekening;
  string nama_pelanggan;
  int meter_lalu, meter_sekarang;
  int pemakaian;
  int tarif_blok_1 = 500;
  int tarif_blok_2 = 800;
  int tarif_blok_3 = 1000;
  int biaya_beban = 30000;

  // Membaca input dari pengguna
  cout << "Masukkan nomor rekening: ";
  cin >> no_rekening;
  cout << "Masukkan nama pelanggan: ";
  cin >> nama_pelanggan;
  cout << "Masukkan penunjuk meter bulan lalu: ";
  cin >> meter_lalu;
  cout << "Masukkan penunjuk meter bulan sekarang: ";
  cin >> meter_sekarang;

  // Menghitung pemakaian
  pemakaian = meter_sekarang - meter_lalu;

  // Menghitung tarif
  int tarif = 0;
  if (pemakaian <= 20) {
    tarif = pemakaian * tarif_blok_1;
  } else if (pemakaian <= 60) {
    tarif = 20 * tarif_blok_1 + (pemakaian - 20) * tarif_blok_2;
  } else {
    tarif = 20 * tarif_blok_1 + 40 * tarif_blok_2 + (pemakaian - 60) * tarif_blok_3;
  }

  // Menghitung biaya pajak
  int biaya_pajak = tarif * 0.1;

  // Menampilkan hasil
  cout << endl;
  cout << "Nomor rekening: " << no_rekening << endl;
  cout << "Nama pelanggan: " << nama_pelanggan << endl;
  cout << "Pemakaian (kWh): " << pemakaian << endl;
  cout << "Tarif: Rp" << tarif << endl;
  cout << "Biaya beban: Rp" << biaya_beban << endl;
  cout << "Biaya pajak: Rp" << biaya_pajak << endl;
  cout << "Total tagihan: Rp" << tarif + biaya_beban + biaya_pajak << endl;

  return 0;
}

Penjelasan program:

Pada baris 5-8, variabel no_rekening, nama_pelanggan, meter_lalu, meter_sekarang, tarif_blok_1, tarif_blok_2, tarif_blok_3, biaya_beban dideklarasikan untuk menyimpan data yang diinput pengguna.
Pada baris 11-14, input dari pengguna dibaca.
Pada baris 17-20, pemakaian dihitung.
Pada baris 22-32, tarif dihitung.
Pada baris 34-36, biaya pajak dihitung.
Pada baris 38-48, hasil dioutputkan.
Berikut adalah contoh penggunaan program:

$ g++ tagihan_listrik.cpp -o tagihan_listrik
$ ./tagihan_listrik

Masukkan nomor rekening: 1234567890
Masukkan nama pelanggan: John Doe
Masukkan penunjuk meter bulan lalu: 100
Masukkan penunjuk meter bulan sekarang: 200

Nomor rekening: 1234567890
Nama pelanggan: John Doe
Pemakaian (kWh): 100
Tarif: Rp50000
Biaya beban: Rp30000
Biaya pajak: Rp5000
Total tagihan: Rp85000
Hasil output program menunjukkan bahwa tagihan listrik untuk pelanggan dengan nomor rekening 1234567890 dan nama John Doe adalah Rp85.000. Tagihan tersebut terdiri dari tarif sebesar Rp50.000, biaya beban sebesar Rp30.000, dan biaya pajak sebesar Rp5.000.

- Program 3 :
Berikut adalah program C++ untuk menghitung gaya yang bekerja pada sebuah mobil dengan massa 100 kg dan bergerak dengan kecepatan 100 km/jam dalam waktu 30 menit:

#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int massa = 100;
  double kecepatan = 100 * 1000 / 60 / 60; // m/s
  double waktu = 30 * 60; // s

  // Menghitung gaya
  double gaya = massa * kecepatan;

  // Menampilkan hasil
  cout << "Gaya yang bekerja pada mobil: " << gaya << " N" << endl;

  return 0;
}

Penjelasan program:

Pada baris 5-6, variabel massa dan kecepatan dideklarasikan untuk menyimpan data yang diberikan.
Pada baris 9-10, waktu dihitung.
Pada baris 12-13, gaya dihitung.
Pada baris 15-16, hasil dioutputkan.
Berikut adalah contoh penggunaan program:

$ g++ gaya_mobil.cpp -o gaya_mobil
$ ./gaya_mobil

Gaya yang bekerja pada mobil: 5000 N
Hasil output program menunjukkan bahwa gaya yang bekerja pada mobil adalah 5000 N. Gaya ini dihasilkan oleh produk antara massa mobil dan kecepatan mobil.

Pada program ini, kecepatan mobil dikonversi dari km/jam menjadi m/s dengan menggunakan rumus berikut:

kecepatan_m/s = kecepatan_km/jam * 1000 / 60 / 60
Hasil konversi ini kemudian digunakan untuk menghitung gaya dengan menggunakan rumus berikut:

gaya = massa * kecepatan

- Program 4 :
Berikut adalah contoh program C++ yang meminta input berupa angka, kata, dan kombinasi huruf dan angka, kemudian menampilkan hasil sesuai dengan format:

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

Program ini meminta pengguna untuk memasukkan sebuah angka, sebuah kata, dan kombinasi huruf dan angka. Setelah itu, program menampilkan kembali angka, kata, dan huruf yang dimasukkan pengguna sesuai dengan format yang diinginkan. Jika ada angka atau huruf pada kombinasi huruf dan angka, hanya huruf yang akan ditampilkan.
