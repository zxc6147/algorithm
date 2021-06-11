// https://www.acmicpc.net/problem/2798

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	// ī�� ���� 3 <= <= 100
	int n;

	// ���� 10 <= <= 300,000
	int m;

	cin >> n >> m;

	vector<int> v(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	int temp;
	int answer = -1;
	// 3���� �̾Ƽ� m�� �����ʴ� �ִ��� ����
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				temp = v[i] + v[j] + v[k];
				if (temp <= m) {
					if (temp > answer) {
						answer = temp;
					}
				}
			}
		}
	}

	cout << answer;
}