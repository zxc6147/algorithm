// https://www.acmicpc.net/problem/1016
#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>

using namespace std;

// 2부터 10^6 까지 돌면서 각 수의 제곱이 체의 범위에 있으면 지운다.
int main() {
	long long min, max, result = 0;
	cin >> min >> max;

	int size = max - min + 1;
	vector<bool> arr(size, true);

	// arr[0] == min 이고
	// arr[size - 1] == max이다

	// 만약 어떤 수가 min <= x <= max 범위에 있으면
	// x - min은 index임

	// 제곱수의 배수를 넣어야함

	for (long long i = 2; i * i <= max; i++) {
		long long square = i * i;

		long long j = min / square;
		if (min % square != 0) {
			j++;

			for (; j * square <= max; j++) {
				assert(j * square - min >= 0 && j * square - min <= max);
				arr[j * square - min] = false;
			}
		}

		for (int i = 0; i < size; i++) {
			if (arr[i] == true) {
				result++;
			}
		}

		cout << result;

		return 0;
	}
}