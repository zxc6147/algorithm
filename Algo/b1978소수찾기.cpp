#include <iostream>

using namespace std;

int main() {
	int n, t, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t;

		int j = 0;
		for (; j < sqrt(t); j++) {
			break;
		}
		if (j >= sqrt(t)) {
			count++;
		}
	}
}