#include <iostream>
#include <vector>
using namespace std;

int solve(int s, vector<int> k, vector<int> u) {
    int result = -1, sum = 0;
    for(int i = 0; i < k.size(); i++) {
        for(int j = 0; j < u.size(); j++) {
            sum = k[i] + u[j];
            if(sum <= s && sum > result)
                result = sum;
        }
    }
    return result;
}

int main() {
    int s, n, m;
    cin >> s >> n >> m;
    vector<int> keyboard(n);
    for(int i = 0; i < n; i++) {
        cin >> keyboard[i];
    }
    vector<int> usb(m);
    for(int i = 0; i < m; i++) {
        cin >> usb[i];
    }

    int result = solve(s, keyboard, usb);
    cout << result << endl;
    return 0;
}
