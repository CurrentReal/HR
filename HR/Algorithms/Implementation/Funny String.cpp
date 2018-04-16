#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int ti = 0; ti < t; ti++)
    {
        string rs, s;
        cin >> rs;
        s = rs;
        reverse(rs.begin(), rs.end());
        string res = "Funny";
        for(int i = 1; i < s.size(); i++)
        {
            if(abs(s[i-1] - s[i]) != abs(rs[i-1] - rs[i]))
            {
                res = "Not Funny";
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}
