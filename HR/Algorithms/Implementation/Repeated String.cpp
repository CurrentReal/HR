#include <iostream>
#include <vector>
using namespace std;

long CountA(string s, long n) {
    int slen = s.size();
    int a = 0;
    for(int i = 0; i < slen; i++)
        if(s[i] == 'a')
            a++;

    long infSlen = a * (n / slen);
    long mod = n % slen;
    for(int i = 0; i < mod; i++)
        if(s[i] == 'a')
            infSlen++;

    return infSlen;
}

int main() {
    string s;
    long n;
    cin >> s >> n;

    cout << CountA(s, n) << endl;
    return 0;
}
