// https://www.acmicpc.net/problem/2204

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n = 1;

	string lowerResult;
	string originResult;

	vector<string> result;

	while (true) {
		cin >> n;

		if (n == 0) {
			break;
		}

		string* arr = new string[n];

		size_t i;
		for (int k = 0; k < n; k++) {
			// 할당
			cin >> arr[k];


			string a = "";
			// to lower
			for (i = 0; i < arr[k].length(); i++) {

				a.push_back(tolower(arr[k][i]));
			}

			// 비교
			if (k == 0) {
				lowerResult = a;
				originResult = arr[k];
			}
			else {
				if (lowerResult > a) {
					lowerResult = a;
					originResult = arr[k];
				}
			}
		}

		result.push_back(originResult);
	}

	vector<string>::iterator it = result.begin();
	for (it; it != result.end(); it++) {
		cout << *it << endl;
	}
}