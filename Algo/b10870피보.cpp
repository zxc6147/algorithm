// https://www.acmicpc.net/problem/10870

#include <iostream>
#include <vector>

using namespace std;

vector<long long> dp;

long long fibo(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;

	if (dp[n] != -1) return dp[n];

	dp[n] = fibo(n - 2) + fibo(n - 1);
	return dp[n];
}

int main() {
	int N;
	cin >> N;

	dp.resize(N + 1, -1);

	cout << fibo(N);
}