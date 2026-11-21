#include <iostream>
#include <string>
using namespace std;

int main() {
	string square;
	cin >> square;

	int column = square[0] - 'a';
	int row = square[1] - '1';
	cout << (column + row) % 2 << endl;
	return 0;
}
