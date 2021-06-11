// https://www.acmicpc.net/problem/11729
// cin cout endl ���� ���� �ӵ��� ������ �ð��ʰ���
// hanoiLog�� return �� ���ִ� �ణ �پ��(152ms -> 148ms)
// hanoi �� pow�� �ٲܽ� 144�� �پ��
// sync_with_stdio(false); ����ϸ� �� ��������

#include <cstdio>
#include <cmath>

using namespace std;

// �ϳ��� n = �ϳ��� n -1 + 1 + �ϳ��� n-1
// n���� ���� 3���� �ű�� �Ѵ�.
// ���� n - 1���� ���� 2�� �ű��.
// �׷����� n - 2���� ���� 3���� �ű��
// �׷����� n - 3���� ���� 2�� �ű��
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