#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int N, K, a;
        cin >> N >> K;
        int cnt = 0;
        for(int j = 0; j < N; j++)
        {
            cin >> a;
            if(a <= 0)
                cnt++;
        }
        if(cnt >= K)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
