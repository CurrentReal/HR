#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i ++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];

    int maxA = *max_element(a.begin(), a.end());
	  int minB = *min_element(b.begin(), b.end());
    int betweenAB_count = 0;
    for(int i = maxA; i <= minB; i++)
    {
        bool state = true;
        for(int j = 0; j < n; j++)
            if(i % a[j] != 0)
                state = false;
        for(int j = 0; j < m; j++)
            if(b[j] % i != 0)
                state = false;
        if(state)
            betweenAB_count++;
    }
    cout << betweenAB_count << endl;
    return 0;
}
