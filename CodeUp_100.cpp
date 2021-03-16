#include <iostream>
using namespace std;
int main() {
	int x = 2, y = 2;
	int a[11][11] = {};
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cin >> a[i][j];
		}
	}
	while (true) {
		if (a[x][y] == 0) {
			a[x][y] = 9;
			y++;
		}
		if (a[x][y] == 1) {
			y--;
			a[x][y] = 9;
			x++;
		}

		if (a[x][y] == 2) {
			a[x][y] = 9;
			break;
		}
		else if (a[x + 1][y] == 1 && a[x][y + 1] == 1) {
			a[x][y] = 9;
			break;
		}
	}
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}