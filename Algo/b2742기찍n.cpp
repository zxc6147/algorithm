// https://www.acmicpc.net/problem/2742

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = N; i >= 1; i--) {
		cout << i << "\n";
	}
}