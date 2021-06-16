// https://www.acmicpc.net/problem/1110

// 0~99
// 10보다 작으면 앞에 0을 붙여 두자리 수로 만들고,
// 각 자리수를 더한다.
// 그다음 주어진 수의 가장오른쪽 자리수와 앞에서 구한 합의오른쪽 자리수를 이어붙임

#include <iostream>

using namespace std;

int cycle(int n) {
	int temp = n, count = 0, a, b;

	while (true) {
		temp = (temp % 10) * 10 + ((temp / 10 + temp % 10) % 10);
		count++;

		if (n == temp) break;
	}

	return count;
}

int main() {
	int N;
	cin >> N;

	cout << cycle(N);
}