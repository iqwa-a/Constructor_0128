//Buatlah progree C++ dengan class Barang yang sentliki atribut: namaBarang,
// kodeBarang
//progran seniliki constructor berparameter untuk mengisi
//nilai namaBarang dan kodebarang.
//serta memiliki fungsi untuk menampilkan infornast barang.

//latihanConstructor_4nim
#include<iostream>
#include<string>
using namespace std;

class Barang {
    private:
        string namaBarang;
        int kodeBarang;
    public:    
        Barang(int kode, string nama) {
            kodeBarang = kode;
            namaBarang = nama;
        }
        void tampilkanInfo() {
            cout << "Kode Barang: " << kodeBarang << endl;
            cout << "Nama Barang: " << namaBarang << endl;
        }
};

int main() {
    Barang brg(100, "ACORD IMRON");
    brg.tampilkanInfo();
    return 0;
}
