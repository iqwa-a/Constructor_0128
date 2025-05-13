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
mahasiswa::mahasiswa(){ // constructor tanpa parameter

}
mahasiswa::mahasiswa(int iNim){ // constructor dengan parameter
    nim = iNim;
}
mahasiswa::mahasiswa(string iNama){
    nama = iNama;
}
void mahasiswa::Cetak(){
   cout << endl << "NIM: " << nim << endl;
    cout << "Nama: " << nama << endl;
}
int main () {
    mahasiswa mhs1(12345);      // hanya nim
    mahasiswa mhs2("Budi");     // hanya nama
    mahasiswa mhs3(12345, "Budi");  
    // tampilan nilai 
    cout << "Data Mahasiswa 1 :"; mhs1.Cetak();
    cout << "Data Mahasiswa 2 :"; mhs2.Cetak();
    cout << "Data Mahasiswa 3 :"; mhs3.Cetak();
    return 0;
}
