// https://www.acmicpc.net/problem/4673
// 에라토스테네스의 채 사용 가능

#include <iostream>

bool isSelfNum(int n) {
	int number = n;

	int digit = 1;
	while (number / 10 > 0) {
		number = number / 10;
		digit++;
	}

	int i = n - digit * 9;
	if (i <= 0) i = 1;

	int ci, k;
	for (i; i < n; i++) {
		ci = i;
		k = i;
		for (int j = 0; j < digit; j++) {
			k += ci % 10;
			ci /= 10;
		}

		if (k == n) {
			return false;
		}
	}

	return true;
}

int main() {
	for (int i = 1; i <= 10000; i++) {
		if (isSelfNum(i)) {
			std::cout << i << '\n';
		}
	}
}