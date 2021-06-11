//// https://www.acmicpc.net/problem/1193
//#include <iostream>
//using namespace std;
//
//// 합이 2 : 1째줄
//// 합이 3 : 2째줄
//// 합이 4 : 3째줄
//// ...
//
//// 합이 짝수이면 분모 1부터
//// 합이 홀수이면 분자 1부터
//
//// 1 + 2 + 3 + ...
//
//int main() {
//	// 일단 이전 분수 개수와 분자분모 합을 구하자
//
//	// n(n+1) / 2 < x 인 최대의 n 구하기
//	int x, n = 1;
//	cin >> x;
//
//	while (n * (n + 1) / 2 < x) {
//		n += 1;
//	}
//	n = n - 1;
//	// (n * (n + 1) / 2 ) 이전 대각선 까지 있는 분수 개수
//	// n + 1 : 현재 대각선 번호
//	// n + 1이 짝수이면 분자1부터, 홀수면 분모 1부터
//	// 합은 대각선 번호 + 1
//	
//	// 남은 개수
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



// 이거 깔끔한듯
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