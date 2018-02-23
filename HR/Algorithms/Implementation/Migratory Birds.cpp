#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> types;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        types[x]++;
    }

    int maxType = 0, ans;
    for(auto it = types.cbegin(); it != types.cend(); it++)
        if(it->second > maxType)
        {
            maxType = it->second;
            ans = it->first;
        }
    cout << ans << endl;
    return 0;
}

// Using vector
/*
int main() {
    int n;
    cin >> n;
    vector<int> types(n);
    for(int i = 0; i < n; i++)
        cin >> types[i];

    vector<int> t(5, 0);
    for(int i = 0; i < n; i++)
        t[types[i]-1]++;

    int maxType = 0;
    for(int i = 0; i < t.size(); i++)
        if(t[i] > t[maxType])
            maxType = i;
    cout << maxType+1 << endl;
    return 0;
}
*/
