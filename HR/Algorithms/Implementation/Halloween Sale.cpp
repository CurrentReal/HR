#include <iostream>
using namespace std;

int main() {
    int p, d, m, s, totalCost = 0, count = 0;
    cin >> p >> d >> m >> s;

    while(totalCost <= s)
    {
        totalCost += p;
        p -= d;
        if(p < m)
            p = m;
        count++;
    }
    cout << count - 1 << endl;
    return 0;
}
