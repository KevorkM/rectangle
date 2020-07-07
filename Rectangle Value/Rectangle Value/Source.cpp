#include <iostream>

using namespace std;

int main() {
	cout << "Looping Practices\n" << endl;

	int NumberOfRows = 0;
	int NumberOfCol = 0;

	cout << "Please enter the number of rows: " << endl;
	cin >> NumberOfRows;

	cout << "Please enter the number of columns:" << endl;
	cin >> NumberOfCol;

	for (int r = 0; r < NumberOfRows; r++) {
		for (int c = 0; c < NumberOfCol; c++) {
			cout << "O";
		}
		cout << endl;
	}

	return 0;
}