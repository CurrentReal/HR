#include <iostream>
using namespace std;
/*
k%2 == diff%2
since whenever you subtract a number from another, the following rules:
a=even, b=even    a-b=even
a=odd, b=odd      a-b=even
a=odd, b=even     a-b=odd
a=even, b=odd     a-b=odd

So suppose:        # k = 6
s = 'abcdefghij'   # diff = 4
t = 'abcdef'
(k - diff) % 2 = (6 - 4) % 2 = 2 % 2 == 0
True
*/
bool Solve(string s, string t, int k) {
    if(s.size() + t.size() < k)
        return true;

    int sameCnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == t[i])
            sameCnt++;
        else
            break;
    }
    int notSameSsize = s.size() - sameCnt;
    int notSameTsize = t.size() - sameCnt;
    int appendDelete = notSameSsize + notSameTsize;
    return (k >= appendDelete) && (appendDelete%2 == k%2);
}

int main() {
    string s, t;
    cin >> s >> t;
    int k;
    cin >> k;

    bool isPossible = Solve(s, t, k);
    string ans;
    isPossible ? ans = "Yes" : ans = "No";

    cout << ans << endl;
    return 0;
}
