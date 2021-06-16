//https://www.acmicpc.net/problem/5622

#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;

	cin >> a;

	int ans = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 'A' || a[i] == 'B' || a[i] == 'C') {
			ans += 3;
		}

		if (a[i] == 'D' || a[i] == 'E' || a[i] == 'F') {
			ans += 4;
		}

		if (a[i] == 'G' || a[i] == 'H' || a[i] == 'I') {
			ans += 5;
		}

		if (a[i] == 'J' || a[i] == 'K' || a[i] == 'L') {
			ans += 6;
		}

		if (a[i] == 'M' || a[i] == 'N' || a[i] == 'O') {
			ans += 7;
		}

		if (a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S') {
			ans += 8;
		}

		if (a[i] == 'T' || a[i] == 'U' || a[i] == 'V') {
			ans += 9;
		}

		if (a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z') {
			ans += 10;
		}

	}

	cout << ans;

}