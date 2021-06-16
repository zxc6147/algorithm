//https://www.acmicpc.net/problem/2908
#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	swap(a[0], a[2]);
	swap(b[0], b[2]);

	if (a < b) cout << b;
	else cout << a;
}