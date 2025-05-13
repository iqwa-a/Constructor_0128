#include<iostream>
#include<string>
using namespace std;
class mahasiswa{
    private:
        int nim;
        string nama;
        public:
        mahasiswa(); // constructor tanpa parameter
        mahasiswa(int);
        mahasiswa(string); // constructor dengan parameter
        mahasiswa(int iNim, string iNama);
        void Cetak();
};