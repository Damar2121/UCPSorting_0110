// TIPE A

// 1. Mulai dari elemen kedua, karena elemen pertama dianggap urut. Bandingkan elemen yand diperiksa dengan elemen sebelumnya.
// Kalau elemen yang diperiksa lebih kecil maka tukar posisinya. Ulangi untuk setiap elemen berikutnya hingga elemen tersebut berada
// diposisi yang benar. Lanjutkan proses ini hingga seluruh array berurutan.

//2. Anggap elemen pertama sebagai elemen terkecil. Cari elemen terkecil dalam array yang belum diurutkan. Setelah menemukan elemen 
// terkecil tukar posisinya dengan elemen pertama dari bagian yang belum diurut. Pindah ke elemen berikutnya dan anggap sebagai elemen 
// terkecil untuk bagian array yang belum diurutkan, ulangi proses pencarian dan pertukaran. Lakukan berulang langkah tersebut hingga semua 
// array berurutan.

//3. Untuk mengetahui jumlah langkah yang dilakukan dalam algoritma sorting, kita perlu memahami konsep kompleksitas waktu dari algoritma 
// tersebut. Kompleksitas waktu adalah ukuran yang menunjukkan jumlah operasi yang diperlukan oleh algoritma untuk menyelesaikan tugasnya,
// biasanya dalam hubungannya ukuran input, yang dinyatakan sebagai (n). 




#include <iostream>
using namespace std;
int damarsadewa[10];
int i, n, temp, j, min_index;

void input() {
	while (true) {
		cout << "masukan banyaknya elemen pada array :";
		cin >> n;
		if (n <= 10)
			break;
		else {
			cout << "\narray dapat mempunyai maksimal elemen 10.\n";
		}
	}


	cout << endl;
	cout << "=========================" << endl;
	cout << "masukan elemen pada array" << endl;
	cout << "=========================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ":";
		cin >> damarsadewa[i];
	}

}

void selectionSort() {

	for (int j = 0; j < n - 1; ++j) {

		int min_index = j;
		for (int i = j + 1; i < n; ++i) {
			if (damarsadewa[i] < damarsadewa[min_index]) {
				min_index = i;
			}
		}
		int temp = damarsadewa[j];
		damarsadewa[j] = damarsadewa[min_index];
		damarsadewa[min_index] = temp;
	}
}

void display() {
	cout << endl;
	cout << "==========================" << endl;
	cout << "elemen array yang tersusun" << endl;
	cout << "==========================" << endl;
	for (int j = 0; j < n; j++) {
		cout << damarsadewa[j] << endl;
	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {
	input();
	selectionSort();
	display();
}