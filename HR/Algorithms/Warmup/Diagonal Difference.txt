#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int fstA = 0, scdA = 0;
	vector< vector<int> > a(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (i == j)
				fstA += a[i][j];
            if(i == n-j-1)
                scdA += a[i][j];
		}
	}
	
	int result = abs(fstA - scdA);
	cout << result << endl;
	return 0;
}