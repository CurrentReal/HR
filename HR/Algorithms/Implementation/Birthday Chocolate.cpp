#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;

    int cnt = 0;
    for(auto iter = s.cbegin(); iter != s.cend(); iter++)
    {
        int sum = accumulate(iter, iter+m, 0);
        if(sum == d)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
