#include <iostream>
using namespace std;

class mahasiswa{ 
    public:
    mahasiswa(); // constructor

};
mahasiswa::mahasiswa(){ // constructor
    cout << "Constructor dipanggil" << endl;
};
int main(){
    mahasiswa mhs; // objek mhs dari class mahasiswa
    return 0;
}
