#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> before(n);
    for(int a_i = 0; a_i < n; a_i++)
       cin >> before[a_i];

    k %= n;
    vector<int> after(n);
    for(int i = 0; i < n; i++)
    {
        after[k++] = before[i];
        if(k == n)
            k = 0;
    }

    for(int a0 = 0; a0 < q; a0++)
    {
        int m;
        cin >> m;
        cout << after[m] << endl;
    }
    return 0;
}
