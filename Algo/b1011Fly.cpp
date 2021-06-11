// https://www.acmicpc.net/problem/1011
// y지점 도착 직전 이동거리는 1광년
// k - 1, k, k + 1만 이동 가능

// 1 + 2 + 3 + ... + n
// + n-1 + ... + 1
// + a

// n(n+1)/2 + n(n-1)/2 = n^2

// endl 땜에 계속 틀렸네...

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
		// 횟수 n + n - 1 + (a에 필요한 거리)

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