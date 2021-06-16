// https://www.acmicpc.net/problem/1546
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;

	int n, t, largest = 0;
	double sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		v.push_back(t);

		if (largest < t) {
			largest = t;
		}
	}

	for (int i = 0; i < n; i++) {
		sum += (double)v[i] / largest * 100;
	}

	cout << sum / n;
}