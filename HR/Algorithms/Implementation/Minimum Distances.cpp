#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int d = INT_MAX;
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(i != j && a[i] == a[j])
                d = min(d, abs(i - j));

    cout << (d == INT_MAX ? -1 : d) << endl;
    return 0;
}
