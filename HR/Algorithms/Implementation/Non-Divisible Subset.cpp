#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k, a, result = 0;
    cin >> n >> k;

    vector<int> s(k);
    for(int i = 0; i < n; i++) {
        cin >> a;
        s[a%k]++;
    }
    /* k = 4
    1 2 3 4 5 6 7 8 9 10
    s -> s[0], s[1], s[2], s[3]
    s[0] : 4, 8
    s[1] : 1, 5, 9
    s[2] : 2, 6, 10
    s[3] : 3, 7
    */

    // idx = k / 2 의 경우(s[2]) 2개 이상을 고르면 서로의 합이 k로 나누어지기 때문에 1개만 고른다.
    if(k%2 == 0)
        s[k/2] = min(s[k/2], 1);
    // idx = (a % k) > 0, 이 때 idx와 k-idx 의 값을 더하면 k로 나누어지기 때문에 더 큰 값(많은 값)을 고른다.
    // s[1] > s[3], result = 3
    for(int idx = 1; idx <= k/2; idx++)
        result += max(s[idx], s[k-idx]);
    // k로 나누어 떨어지는 경우(s[0])는 2개 이상을 고르면 서로의 합이 k로 나누어지기 때문에 1개만 고른다.
    // result += 1
    result += min(1, s[0]);
    cout << result << endl;
    return 0;
}
