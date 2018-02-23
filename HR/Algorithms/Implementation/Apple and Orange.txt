#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    
    int appleCount = 0, OrangeCount = 0;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
        cin >> apple[apple_i];
        if((a + apple[apple_i]) >= s && (a + apple[apple_i]) <= t)
            appleCount++;
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
        cin >> orange[orange_i];
        if((b + orange[orange_i]) >= s && (b + orange[orange_i]) <= t)
            OrangeCount++;
    }
    cout << appleCount << endl << OrangeCount << endl;
    return 0;
}