#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
/*
3, 1, 2
0 (+1) 1 (+1) 2
0 (+1) 1 (+2) 3
0 (+2) 2 (+1) 3
0 (+2) 2 (+2) 4
4, 10, 100
0 (+10) 10 (+10) 20 (+10) 30
0 (+10) 10 (+10) 20 (+100) 120
0 (+10) 10 (+100) 110 (+100) 210
0 (+100) 100 (+10) 110 (+10) 120
0 (+100) 100 (+100) 200 (+10) 210
0 (+100) 100 (+100) 200 (+100) 300
*/
void Solve() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> res;
    //set<int> s;
    for(int i = 0; i < n; i++)
        res.push_back(a * (n-i-1) + b * i);
        //s.insert(a * (n-i-1) + b * i);

    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    for_each(res.begin(), res.end(), [](int i) { cout << i << " "; });
    cout << endl;
}
void prevSolve() {
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;

    vector<int> res;
    int aCnt = n-1, bCnt = 0;
    while(n--)
    {
        int firstStone = 0;
        for(int i = 0; i < aCnt; i++)
            firstStone += a;
        for(int i = 0; i < bCnt; i++)
            firstStone += b;

        res.push_back(firstStone);
        aCnt--;
        bCnt++;
    }

    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    for_each(res.begin(), res.end(), [](int i) { cout << i << " "; });
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
        Solve();
    return 0;
}
