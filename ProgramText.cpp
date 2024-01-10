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