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