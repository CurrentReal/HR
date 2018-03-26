#include <iostream>
using namespace std;

int Digits(int n) {
    int cnt = 0;
    while(n > 0)
    {
        n = n/10;
        cnt++;
    }
    return cnt;
}
int Pow(int x, int y) {
    int n = 1;
    while(y--)
        n *= x;
    return n;
}

int main() {
    int p, q;
    cin >> p >> q;
    bool flag = false;
    for(int i = p; i <= q; i++)
    {
        int d = Digits(i);
        int split = Pow(10, d);
        long long n = (long long)i*i;
        int r = n / split;
        int l = n % split;
        if(r + l == i)
        {
            cout << i << " ";
            flag = true;
        }
    }
    if(!flag)
        cout << "INVALID RANGE" << endl;

    return 0;
}
