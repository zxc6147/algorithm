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
		if (alphabet[(int)a[i] - 0x61] == -1) {
			alphabet[(int)a[i] - 0x61] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}
}