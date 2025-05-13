#include<iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa(int nim, string nama); // constructor
};
mahasiswa::mahasiswa(int nim, string nama){ // constructor
    cout << "Constructor dipanggil" << endl;
    cout << "NIM: " << nim << endl;
    cout << "Nama: " << nama << endl;
};
int main() {
    mahasiswa mhs(12345, "Budi"); 
    return 0;
}