// https://www.acmicpc.net/problem/10872

#include <iostream>

using namespace std;

// long long ���� �ϴ� �ð��ʰ���..
int fact(int n) {
	if (n == 1|| n == 0) {
		return 1;
	}
	return n * fact(n - 1);
}

int main() {
	int n;

	cin >> n;

	cout << fact(n) << endl;
}