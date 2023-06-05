#include <iostream>
#include <string>
using namespace std;

class pengarang {
public:
	string nama;
	pengarang(string pNama) :
		nama(pNama) {
		cout << "Daftar pengarang pada penerbit " << nama << " :\n" << endl;
	}
};

class penerbit {
public:
	string nama;
	penerbit(string pNama) :
		nama(pNama) {
		cout << "\nDaftar penerbit yang diikuti " << nama << " :\n" << endl;
	}
};

class buku {
public:
	string judul;
	buku(string pNama) :
		judul(pNama) {
		cout << "\nDaftar buku yang dikarang " << judul << " :\n" << endl;
	}

};

int main() {
	pengarang;
	penerbit;
	buku;
	return 0;
}