// https://www.acmicpc.net/problem/1712
// 
// A���� ���� ���
// ��Ʈ�ϴ� B �������

// �� ���� = c * n
// �� ��� = A + n * B
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