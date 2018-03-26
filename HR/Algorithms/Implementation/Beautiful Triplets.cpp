#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(*find(a.begin(), a.end(), a[i]+d) && *find(a.begin(), a.end(), a[i]+(d*2)))
            cnt++;

    cout << cnt << endl;
    return 0;
}
