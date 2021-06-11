// https://www.acmicpc.net/problem/1463
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	vector<int> dp;
	cin >> N;

	dp.resize(N + 1, -1);

	dp[1] = 0; // base case
	for (int i = 2; i <= N; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
	}

	cout << dp[N];
}