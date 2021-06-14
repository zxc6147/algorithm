// https://www.acmicpc.net/problem/1065

#include <iostream>

using namespace std;

bool isHansu(int n) {
	int before = n % 10;
	int after = (n / 10) % 10;

	int dif = after - before;
	while (n / 10 > 0) {
		n /= 10;

		after = n % 10;

		if (dif != after - before) {
			return false;
		}
		before = after;
	}

	return true;
}

int main() {
	int N;
	cin >> N;
	int ans = 0;
	
	for (int i = 1; i <= N; i++) {
		if (isHansu(i)) {
			ans++;
		}
	}

	cout << ans;
}