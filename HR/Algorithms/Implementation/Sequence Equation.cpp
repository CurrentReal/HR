#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    vector<int> p(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> k;
        p[k] = i;
    }
    for(int i = 1; i <= n; i++)
        cout << p[p[i]] << endl;

    return 0;
}
