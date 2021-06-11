// https://www.acmicpc.net/problem/1011
// y���� ���� ���� �̵��Ÿ��� 1����
// k - 1, k, k + 1�� �̵� ����

// 1 + 2 + 3 + ... + n
// + n-1 + ... + 1
// + a

// n(n+1)/2 + n(n-1)/2 = n^2

// endl ���� ��� Ʋ�ȳ�...

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	long long x, y;

	long long ans = 0, dis = 0, root = 0;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x >> y;

		dis = y - x;

		root = sqrt(dis);

		ans += 2 * root - 1;
		// Ƚ�� n + n - 1 + (a�� �ʿ��� �Ÿ�)

		long long remainder = dis - root * root;
		if (remainder % root == 0)
		{
			ans += remainder / root;
		}
		else {
			ans += remainder / root + 1;
		}

		cout << ans << endl;

		ans = 0;
	}
}