// https://www.acmicpc.net/problem/10809
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int* alphabet = new int[26];
	memset(alphabet, -1, sizeof(int) * 26);

	string a;
	cin >> a;

	for (int i = 0; i < a.size(); i++) {
		cout << (int)a[i] - 0x61 << endl;
		if (alphabet[(int)a[i] - 0x61]) {

		}
	}
}