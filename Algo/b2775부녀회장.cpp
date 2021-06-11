//https://www.acmicpc.net/problem/2775

// k층, n호에 사려면 k-1층의 1호부터 n호까지 사람들 수의 합만큼 데려와 살아야한다
// 0층부터 시작이며 0층의 i호는 i명이 산다.
// f(n, k) = f(n-1, k) + f(n, k - 1);
// 재귀?
// 개수가 한정되어 있으니 재귀 말고 배열로 해도 됐을듯
// 배열이 더 빠르다
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