// https://www.acmicpc.net/problem/2231

#include <iostream>

using namespace std;

int main() {
	// X�� �ڸ����� n�̸� X - 9 * n ���� ���� ����
	int number;
	int tempNumber;

	cin >> number;

	tempNumber = number;
	
	int count = 0;

	while (true) {
		if (tempNumber / 10 == 0) {
			count++;
			break;
		}
		else {
			count++;
			tempNumber = tempNumber / 10;
		}
	}

	// default, ������ ���� �� ���
	int answer = 0;

	for (int i = number - 9 * count; i < number; i++) {
		// i + i/10 + i/100+... �ؼ� m�� �����°�? �� �Ǵ�
		int sum = i;

		int devided = i;
		// �ڸ��� : count
		for (int j = 0; j < count; j++) {
			sum += devided % 10;
			devided /= 10;
		}

		if (sum == number) {
			answer = i;
			break;
		}
	}

	cout << answer;

	return 0;
}