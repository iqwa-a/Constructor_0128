#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
    buku setjumlah(int jdl) {
        this->judul = jdl;
        return *this;
    }
};