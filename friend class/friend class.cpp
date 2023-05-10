#include <iostream>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void setnama(string pNama);
	friend class siswa;
};

class siswa {
private:
	int id;
public:
	void setid(int pId);
	void dispayAll(orang& a);
};

void siswa::dispayAll(orang& a) {
	cout << id << endl << a.nama;
}

void siswa::setid(int pId) {
	id = pId;
}

void orang::setnama(string pNama) {
	nama = pNama;
}

int main() {
	orang o;
	o.setnama("Joko Kumat");
	siswa s;
	s.setid(1);
	s.dispayAll(o);
	cout << endl;
	system("pause");
	return 0;
}