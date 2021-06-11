// https://www.acmicpc.net/problem/11729
// cin cout endl 들을 쓰면 속도가 느려서 시간초과됨
// hanoiLog의 return 값 없애니 약간 줄어듬(152ms -> 148ms)
// hanoi 를 pow로 바꿀시 144로 줄어듬
// sync_with_stdio(false); 사용하면 더 빨라질듯

#include <cstdio>
#include <cmath>

using namespace std;

// 하노이 n = 하노이 n -1 + 1 + 하노이 n-1
// n개의 판을 3으로 옮기려 한다.
// 먼저 n - 1개의 판을 2로 옮긴다.
// 그러려면 n - 2개의 판을 3으로 옮긴다
// 그러려면 n - 3개의 판을 2로 옮긴다
// ...

void hanoiLog(int n, int from, int another, int to) {

	if (n == 1) {
		printf("%d %d\n", from, to);
	}
	else {
		hanoiLog(n - 1, from, to, another);
		hanoiLog(1, from, another, to);
		hanoiLog(n - 1, another, from, to);
	}
	
}

int hanoiResult(int n)
{
	if (n == 1)
		return 1;
	else
		return hanoiResult(n - 1) * 2 + 1;
}

int main() {
	int n;
	scanf_s("%d", &n);
	printf("%d\n", hanoiResult(n));
	hanoiLog(n, 1, 2, 3);
}