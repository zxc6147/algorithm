// https://www.acmicpc.net/problem/2447

#include <iostream>
#include <cstring>

using namespace std;

void draw(char** arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

// 만약 n == 9면
// 3<= <6까지 공백

void setBlank(char** arr, int n, int startRow, int startColumn) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[startRow + i][startColumn + j] = ' ';
		}
	}
}

void set(char** arr, int n, int startRow, int startColumn) {
	if (n == 3) {
		arr[startRow + 1][startColumn + 1] = ' ';
	}
	else {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i == 1 && j == 1) {
					setBlank(arr, n / 3, startRow + i * n / 3, startColumn + j * n / 3);
				}
				else {
					set(arr, n / 3, startRow + i * n / 3, startColumn + j * n / 3);

				}
			}
		}
	}
}

int main() {
	// n by n matrix
	int n;
	cin >> n;

	char** arr = new char* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new char[n];
		memset(arr[i], '*', n);
	}

	set(arr, n, 0, 0);

	draw(arr, n);
}