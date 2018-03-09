#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }

    sort(a.begin(), a.end());
    int max = 0;
    for(int i = 0; i < n; i++){
        int cnt = 1;
        for(int j = i+1; j < n; j++){
            if(abs(a[i] - a[j]) <= 1)
                cnt++;
            else
                break;
        }
        if(max < cnt)
            max = cnt;
    }
    cout << max << endl;
    return 0;
}
