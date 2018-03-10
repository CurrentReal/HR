#include <iostream>
#include <algorithm>
using namespace std;

int IsBeautiful(int start, int end, float div) {
    int cnt = 0;
    for(int i = start; i <= end; i++)
    {
        string rs = to_string(i);
        string s = rs;
        reverse(s.begin(), s.end());
        float result = abs(stoi(s) - stoi(rs))/div;
        int resultInt = abs(stoi(s) - stoi(rs))/div;
        if(result == resultInt)
            cnt++;
    }
    return cnt;
}

// Editoiral
int IsOK(int start, int end, int div) {
    int cnt = 0;
    for(int i = start; i <= end; i++)
    {
        int st = i, rvs = 0;
        while(st > 0)
        {
            rvs = rvs*10 + st%10;
            st /= 10;
        }
        int result = abs(i - rvs);
        result %= div;
        if(result == 0)
            cnt++;
    }
    return cnt;
}
int main() {
    int start, end;
    float div;
    cin >> start >> end >> div;
    //cout << IsBeautiful(start, end, div) << endl;
    cout << IsOK(start, end, div) << endl;
    return 0;
}
