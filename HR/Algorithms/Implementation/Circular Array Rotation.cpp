#include <iostream>
#include <vector>
using namespace std;
/*
Because when the number of rotations(k) equals the size of the array(n), the array returns to it's original setup. For example, after 3 rotations, this array is back to original:
[1,2,3] 0 original
[3,1,2] 1 rotation
[2,3,1] 2 rotations
[1,2,3] 3 rotations //Back to original setup
[3,1,2] 4 rotations // same as 1 rotation
Therefore if you have 4 rotations, then 4 % 3 is 1, so you will get the same result as if you only had 1 rotation to begin with.
*/
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
