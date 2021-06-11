//// https://www.acmicpc.net/problem/1193
//#include <iostream>
//using namespace std;
//
//// ���� 2 : 1°��
//// ���� 3 : 2°��
//// ���� 4 : 3°��
//// ...
//
//// ���� ¦���̸� �и� 1����
//// ���� Ȧ���̸� ���� 1����
//
//// 1 + 2 + 3 + ...
//
//int main() {
//	// �ϴ� ���� �м� ������ ���ںи� ���� ������
//
//	// n(n+1) / 2 < x �� �ִ��� n ���ϱ�
//	int x, n = 1;
//	cin >> x;
//
//	while (n * (n + 1) / 2 < x) {
//		n += 1;
//	}
//	n = n - 1;
//	// (n * (n + 1) / 2 ) ���� �밢�� ���� �ִ� �м� ����
//	// n + 1 : ���� �밢�� ��ȣ
//	// n + 1�� ¦���̸� ����1����, Ȧ���� �и� 1����
//	// ���� �밢�� ��ȣ + 1
//	
//	// ���� ����
//	x = x - (n * (n + 1) / 2);
//
//	int num = n + 1;
//	int sum = num + 1;
//
//	if (num % 2 == 1) {
//		cout << sum - x << "/" << x;
//	}
//	else {
//		cout << x << "/" << sum - x;
//	}
//}



// �̰� ����ѵ�
#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	int i = 1;
	while (x > i) {
		x -= i;
		i++;
	}

	if (i % 2 == 0)
		cout << x << '/' << i + 1 - x << endl;
	else
		cout << i + 1 - x << '/' << x << endl;
}