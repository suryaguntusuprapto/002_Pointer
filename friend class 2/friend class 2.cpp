#include <iostream>
using namespace std;

class mahasiswa {
private:
	string nama;
public:
	friend void setnama(mahasiswa& a, string);
};

void setnama(mahasiswa& a, string pNama) {
	a.nama = pNama;
	cout << "Nama" << a.nama;
}
