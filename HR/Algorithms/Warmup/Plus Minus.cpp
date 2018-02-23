#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);

	float posCnt = 0, negCnt = 0, zeroCnt = 0;
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
		if (arr[arr_i] > 0)
			posCnt++;
		else if (arr[arr_i] < 0)
			negCnt++;
		else
			zeroCnt++;
	}

	cout << (posCnt / n) << endl;
	cout << (negCnt / n) << endl;
	cout << (zeroCnt / n) << endl;
	return 0;
}