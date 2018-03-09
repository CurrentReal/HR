#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i = 0; i < n; i++)
        cin >> h[i];

    int maxVal = *max_element(h.begin(), h.end());
    if(k > maxVal)
        cout << 0 << endl;
    else
        cout << maxVal - k << endl;
    return 0;
}
