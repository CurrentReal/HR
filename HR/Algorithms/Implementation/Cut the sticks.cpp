#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> N(n);
    for(int i = 0; i < n; i++)
        cin >> N[i];
    
    int maxVal = *max_element(N.begin(), N.end());
    while(maxVal > 0)
    {
        int minVal = maxVal;
        for(int i = 0; i < N.size(); i++)
            if(N[i] > 0)
                minVal = min(minVal, N[i]);
        int cnt = 0;
        for(int i = 0; i < N.size(); i++)
        {
            if(N[i] > 0)
            {
                cnt++;
                N[i] -= minVal;
            }
        }
        maxVal = *max_element(N.begin(), N.end());
        cout << cnt << endl;
    }
    return 0;
}
