#include <iostream>
using namespace std;

string hackerrankInString(string s) {
    string hr = "hackerrank";
    int idx = 0;
    for(int i = 0; i< s.size(); i++)
    {
        if(s[i] == hr[idx])
            idx++;
        if(idx == hr.size())
            break;
    }
    string ans = "NO";
    if(idx == hr.size())
        ans = "YES";

    return ans;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = hackerrankInString(s);
        cout << result << endl;
    }
    return 0;
}
