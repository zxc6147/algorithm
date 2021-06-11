//https://www.acmicpc.net/problem/2775

// k��, nȣ�� ����� k-1���� 1ȣ���� nȣ���� ����� ���� �ո�ŭ ������ ��ƾ��Ѵ�
// 0������ �����̸� 0���� iȣ�� i���� ���.
// f(n, k) = f(n-1, k) + f(n, k - 1);
// ���?
// ������ �����Ǿ� ������ ��� ���� �迭�� �ص� ������
// �迭�� �� ������
#include <iostream>

using namespace std;

int func(int k, int n) {
	if (k == 0) {
		return n;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return func(k, n - 1) + func(k - 1, n);
	}
}

int main() 
{
	int t, k, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << func(k, n) << endl;
	}

}