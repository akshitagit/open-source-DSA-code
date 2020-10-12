#include <bits/stdc++.h>
using namespace std;

vector<long long > solutions(long long  r) {
	vector<long long > arr1;
	arr1.push_back(r);
	while (r != 1) {
		if (r % 2 == 0) {
			r = r / 2;
			arr1.push_back(r);
		}
		else {
			r = 3 * r + 1;
			arr1.push_back(r);
		}
	}
	return arr1;
}


int main() {
	long long  n ;
	cin >> n;

	vector<long long > ans = solutions(n);
	for (auto i : ans) {
		cout << i << " ";
	}
	return 0;
}