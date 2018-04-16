#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int ti = 0; ti < t; ti++)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s[i] == s[i+1])
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
