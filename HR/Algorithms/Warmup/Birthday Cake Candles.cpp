#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, maxh = 0;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i]; 
       maxh = max(maxh, height[height_i]);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(maxh == height[i])
            cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}