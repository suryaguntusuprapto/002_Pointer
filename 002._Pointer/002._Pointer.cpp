#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void shownim();
};

void mahasiswa::shownim() {
	cout << "No Induk = " << nim << endl;
}

int main() {
	mahasiswa mhs{ 1 };
	mhs.shownim();

	mahasiswa& ref = mhs;
	ref.nim = 2;
	mhs.shownim();

	mahasiswa* pmhs = &mhs;
	pmhs->nim = 3;
}