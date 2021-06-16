// https://www.acmicpc.net/problem/1110

// 0~99
// 10���� ������ �տ� 0�� �ٿ� ���ڸ� ���� �����,
// �� �ڸ����� ���Ѵ�.
// �״��� �־��� ���� ��������� �ڸ����� �տ��� ���� ���ǿ����� �ڸ����� �̾����

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