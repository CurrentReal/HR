#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> w(n);
    for(int i = 0; i < n; i++)
        cin >> w[i];

    for(int t_i = 0; t_i < t; t_i++)
    {
        int entry, exit;
        cin >> entry >> exit;

        int min = INT_MAX;
        for(int i = entry; i <= exit; i++)
        {
            if(min > w[i])
                min = w[i];
        }
        cout << min << endl;
    }
    return 0;
}
