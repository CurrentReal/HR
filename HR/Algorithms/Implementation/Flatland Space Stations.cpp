#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    sort(c.begin(), c.end());
    int maxDis = c[0];
    for(int i = 1; i < m; i++)
    {
        int distance = (c[i] - c[i-1]) / 2;
        maxDis = max(maxDis, distance);
    }
    int lastStationDis = n - c[m-1] - 1;
    maxDis = max(maxDis, lastStationDis);

    cout << maxDis << endl;
    return 0;
}
