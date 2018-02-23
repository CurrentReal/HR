#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int modCnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if((a[i] + a[j]) % k == 0)
                modCnt++;
    cout << modCnt << endl;
    return 0;
}