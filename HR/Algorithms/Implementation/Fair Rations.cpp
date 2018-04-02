#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, sum = 0, cnt = 0;
    cin >> n;
    vector<int> b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
        sum += b[i];
        if(sum%2 != 0)
            cnt += 2;
    }

    if(sum%2 != 0)
        cout << "NO" << endl;
    else
        cout << cnt << endl;

    return 0;
}
