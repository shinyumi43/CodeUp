#include <iostream>
using namespace std;
int main() {
	int h, w, n, l, d, x, y;
	cin >> h >> w;
	int a[101][101] = {};
	cin >> n;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			a[i][j] = 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		cin >> l >> d >> x >> y;
		if (d == 0) {
			for (int j = 1; j <= l; j++) {
				a[x][y + j - 1] = 1;
			}
		}
		else if (d == 1) {
			for (int j = 1; j <= l; j++) {
				a[x + j - 1][y] = 1;
			}
		}
	}
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
