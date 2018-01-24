#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, grade;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> grade;
        if(grade >= 38)
        {
            int mod = grade % 5;
            if(mod > 2)
                grade += 5 - mod;
        }
        cout << grade << endl;
    }
    return 0;
}
