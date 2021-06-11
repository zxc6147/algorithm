// https://www.acmicpc.net/problem/10757

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	vector<int> A;
	vector<int> B;
	vector<int> ans;
	string temp;
	
	cin >> temp;
	reverse(temp.begin(), temp.end());

	for (int i = 0; i < temp.size(); i++) {
		A.push_back(temp[i] - '0');
	}

	cin >> temp;
	reverse(temp.begin(), temp.end());

	for (int i = 0; i < temp.size(); i++) {
		B.push_back(temp[i] - '0');
	}

	bool over = false;

	int size;
	if (A.size() > B.size()) {
		size = A.size();
	}
	else {
		size = B.size();
	}

	// �Ѱ��� null�̰� �Ѱ��� null�� �ƴѰ�쵵 ���
	// �� �� null�� ���� ����
	// ���� ������ �ڸ����� over�̸� �ϳ� �� �÷�����
	int t;
	for (int i = 0; i < size; i++) {
		if (i >= A.size()) A.push_back(0);
		if (i >= B.size()) B.push_back(0);
		t = A[i] + B[i];
		if (over == true) t++;

		if (t >= 10) {
			t = t % 10;
			over = true;
		}
		else {
			over = false;
		}

		ans.push_back(t);
	} 
	if (over == true) {
		ans.push_back(1);
	}

	reverse(ans.begin(), ans.end());
	
	vector<int>::iterator it = ans.begin();
	for (it; it != ans.end(); it++) {
		cout << *it ;
	}
}