// https://www.acmicpc.net/problem/2292

#include <iostream>
#include <cmath>
using namespace std;

bool isIn(int ans, int N) {
	cout << "A : " << 3 * ans * (ans + 1) + 1 << endl;
	cout << "B : " << 3 * (ans + 1) * (ans + 2) + 1 << endl;
	if (3  * ans * (ans + 1) + 1 < N
		&& N <= 3 * (ans + 1) * (ans + 2) + 1){
		return true;
	}
	return false;
}

int main() {
	// 거리 1 : 1 // 1개
	// 거리 2 : 2 ~ 7 // 6개
	// 거리 3 : 8 ~ 19 // 12개
	// 거리 4 : 20 ~ 37 // 18개
	// 거리 5 : 38 ~ 61 // 24개

	// 1 7 19 37 61
	// 3n(n+1) + 1
	// 3n(n+1) + 1 < x <= 3(n+1)(n+2) + 1
	// 3n^2 < x - 1 < 3(n+2)^2
	// n < sqrt( (x - 1) / 3 ) < n + 2
	// ans = sqrt( (x - 1) / 3 ) 를 구해서 조건에 만족하는지 확인
	// ans는 n 또는 n + 1

	int N;
	cin >> N;
	int ans = sqrt((N - 1) / 3);
	if (N == 1) cout << 1;
	else if (isIn(ans - 1, N)) cout << ans + 1;
	else if (isIn(ans, N)){
		cout << ans + 2;
	}
}



// 이게 더 나은듯
//#include <iostream>
//using namespace std;
//
//int main() {
//	int N;
//	int s = 1, count = 6;
//	int result = 1;
//	cin >> N;
//
//	while (true) {
//		if (s >= N) {
//			cout << result << endl;
//			return 0;
//		}
//		s += count;
//		count += 6;
//		result++;
//	}
//}