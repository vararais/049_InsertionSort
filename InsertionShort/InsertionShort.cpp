#include <iostream>
using namespace std;

int arr[9];
int n;

void input() {
	while (true) {
		cout << "Masukkan Banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
		}
	}

	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan Elemen Array Nya" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

