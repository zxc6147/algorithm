// https://www.acmicpc.net/problem/1316
#include <iostream>
#include <vector>

using namespace std;

bool isGroup(string s) {
	vector<char> a;
	for (int i = 0; i < s.size(); i++) {
		// 만약 a에 없으면 집어넣고, 있으면 s[i-1]과 비교
		bool found = false;
		for (int j = 0; j < a.size(); j++) {
			if (a[j] == s[i]) {
				found = true;
				if (s[i] != s[i - 1]) return false;
			}
		}
		if (!found) a.push_back(s[i]);
	}

	return true;
}

int main() {
	int N, ans = 0;
	string t;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> t;

		if (isGroup(t)) ans++;
	}

	cout << ans;
}