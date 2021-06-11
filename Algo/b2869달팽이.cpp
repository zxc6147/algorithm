// https://www.acmicpc.net/problem/2869
#include <iostream>

using namespace std;

int main() {
	int A, B, V;

	cin >> A >> B >> V;

	double t = ((double)V - A) / ((double)A - B);
	if (t - (int)t == 0) {
		cout << (int)t + 1;
	}
	else{
		cout << (int)t + 2;
	}
}