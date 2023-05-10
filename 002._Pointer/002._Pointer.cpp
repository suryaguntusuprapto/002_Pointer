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