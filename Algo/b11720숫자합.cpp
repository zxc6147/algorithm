//https://www.acmicpc.net/problem/11720
#include <iostream>

using namespace std;

int main() {
	int N;

	cin >> N;

	int sum = 0;
	char a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		sum += (int)a - 48;
	}

	cout << sum;
}