#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
    buku setjumlah(int judul) {
        this->judul = judul;
        return *this;
    }
    string getjudul() {
        return this->judul;
    }
};