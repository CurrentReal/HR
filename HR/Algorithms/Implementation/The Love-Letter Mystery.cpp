#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int ti = 0; ti < t; ti++)
    {
        string s;
        cin >> s;
        int i = 0, j = s.size() - 1, cnt = 0;
        while(i < j)
        {
            cnt += abs(s[i] - s[j]);
            i++;
            j--;
        }
        cout << cnt << endl;
    }
    return 0;
}
