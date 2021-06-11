// https://www.acmicpc.net/problem/1712
// 
// A만원 고정 비용
// 노트북당 B 가변비용

// 총 수입 = c * n
// 총 비용 = A + n * B
#include <iostream>
using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B >> C;

	if (C == B) {
		cout << -1;
		return 0;
	}

	if ((A / (C - B) + 1) > 0) {
		cout << A / (C - B) + 1;
	}
	else {
		cout << -1;
	}
}