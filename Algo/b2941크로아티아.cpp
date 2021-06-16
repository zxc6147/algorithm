// https://www.acmicpc.net/problem/2941
#include <iostream>
#include <string>

using namespace std;

// c 老 版快 : c=, c-
// d 牢 版快 : dz=, d-
// l老 版快 : lj
// n老 版快 : nj
// s牢 版快 : s=
// z牢 版快 : z=

// dz=, z=, dz 备喊?

int main() {
	string s;

	cin >> s;
	int ans = 0;

	int size = s.size();
	for (int i = 0; i < size; i++) {
		switch (s[i])
		{
		case 'c':
			if (i + 1 < size) {
				if (s[i + 1] == '=' || s[i + 1] == '-') {
					ans++;
					i++;
				}
				else {
					ans++;
				}
			}
			else {
				ans++;
			}
			break;

		case 'd':
			if (i + 1 < size) {
				if (s[i + 1] == '-') {
					ans++;
					i++;
				}
				else if (s[i + 1] == 'z') {
					if (i + 2 < size) {
						if (s[i + 2] == '=') {
							ans++;
							i += 2;
						}
						else {
							ans+=2;
							i++;
						}
					}
					else {
						ans += 2;
						i += 2;
					}
				}
				else {
					ans++; 
				}
			}
			else {
				ans++;
			}
			break;

		case 'l':
			if (i + 1 < size) {
				if (s[i + 1] == 'j') {
					ans++;
					i++;
				}
				else {
					ans++;
				}
			}
			else {
				ans++;
			}
			break;

		case 'n':
			if (i + 1 < size) {
				if (s[i + 1] == 'j') {
					ans++;
					i++;
				}
				else {
					ans++;
				}
			}
			else {
				ans++;
			}
			break;

		case 's':
			if (i + 1 < size) {
				if (s[i + 1] == '=') {
					ans++;
					i++;
				}
				else {
					ans++;
				}
			}
			else {
				ans++;
			}
			break;

		case 'z':
			if (i + 1 < size) {
				if (s[i + 1] == '=') {
					ans++;
					i++;
				}
				else {
					ans++;
				}
			}
			else {
				ans++;
			}
			break;

		default:
			ans++;
			break;
		}
	}
	cout << ans;
}