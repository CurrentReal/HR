#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    string ans = "NO";
    while(v1 > v2 && x2 > x1)
    {
        x1 += v1;
        x2 += v2;
        if(x1 == x2)
        {
            ans = "YES";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

// Discussions
/*
int main() {
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    string ans = "NO";
    if(v2 >= v1 && x1 != x2)
    {
        cout << ans << endl;
        return 0;
    }
    else
    {
        if((x2-x1)%(v1-v2) == 0)
            ans = "YES";
    }
    cout << ans << endl;
    return 0;
}
*/
