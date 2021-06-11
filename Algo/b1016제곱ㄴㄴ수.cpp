// https://www.acmicpc.net/problem/1016
#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>

using namespace std;

// 2���� 10^6 ���� ���鼭 �� ���� ������ ü�� ������ ������ �����.
int main() {
	long long min, max, result = 0;
	cin >> min >> max;

	int size = max - min + 1;
	vector<bool> arr(size, true);

	// arr[0] == min �̰�
	// arr[size - 1] == max�̴�

	// ���� � ���� min <= x <= max ������ ������
	// x - min�� index��

	// �������� ����� �־����

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