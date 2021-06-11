// https://www.acmicpc.net/problem/2798

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	// 카드 개수 3 <= <= 100
	int n;

	// 숫자 10 <= <= 300,000
	int m;

	cin >> n >> m;

	vector<int> v(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	int temp;
	int answer = -1;
	// 3개를 뽑아서 m을 넘지않는 최대의 정수
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