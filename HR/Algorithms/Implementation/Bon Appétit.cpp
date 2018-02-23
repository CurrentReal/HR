#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n, k, b, totalCost;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cin >>  b;

    totalCost = accumulate(v.cbegin(), v.cend(), 0);
    totalCost = (totalCost - v[k]) / 2;
    if(totalCost == b)
        cout << "Bon Appetit" << endl;
    else
        cout << b - totalCost << endl;

    return 0;
}
