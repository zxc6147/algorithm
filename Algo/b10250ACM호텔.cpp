// https://www.acmicpc.net/problem/10250

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t;

	vector<int> H, W, N;

	cin >> t;

	H.resize(t);
	W.resize(t);
	N.resize(t);

	for (int i = 0; i < t; i++) {
		cin >> H[i] >> W[i] >> N[i];
	}

	// h�� ��, n�� ��� ��ȣ
	for (int i = 0; i < t; i++) {
		
		//n % h�� 0~h-1
		// 0�̸� h

		// (n - 1 / h) + 1�� ���ȣ

		if (N[i] % H[i] == 0) {
			cout << H[i];
		}
		else {
			cout << N[i] % H[i];
		}

		if ((((N[i] - 1) / H[i]) + 1) <= 9) {
			cout << '0' << ((N[i] - 1) / H[i]) + 1 << endl;
		}
		else {
			cout << ((N[i] - 1) / H[i]) + 1 << endl;
		}
	}
}


//// �̰� �� ������
//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int t;
//	int w, h, n;
//
//	int x;
//	int y;
//
//	cin >> t;
//
//	for (int i = 0; i < t; i++) {
//		cin >> h >> w >> n;
//
//		x = (n - 1) / h + 1;
//		y = (n - 1) % h + 1;
//
//		cout << y * 100 + x << endl;
//	}
//
//	return 0;
//}