// https://www.acmicpc.net/problem/2839

// 5, 3
// brute force?
// N <= 5000

#include <iostream>
using namespace std;

int main() {
	int N;

	cin >> N;


	int q;

	for (q = N / 5; q >= 0; q--) {
		int r = N - q * 5;

		if (r % 3 == 0) {
			cout << q + r / 3;
			break;
		}
	}
	if (q == -1) {
		cout << -1;
	}
}