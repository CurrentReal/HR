#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 0;
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        if(v[i] == v[i+1]) {
            cnt++;
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}
