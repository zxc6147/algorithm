// https://www.acmicpc.net/problem/2231

#include <iostream>

using namespace std;

int main() {
	// X의 자릿수가 n이면 X - 9 * n 에서 부터 시작
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

	// default, 생성자 없을 시 출력
	int answer = 0;

	for (int i = number - 9 * count; i < number; i++) {
		// i + i/10 + i/100+... 해서 m이 나오는가? 를 판단
		int sum = i;

		int devided = i;
		// 자리수 : count
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