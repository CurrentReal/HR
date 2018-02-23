#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> a(3), b(3);
    int ap = 0, bp = 0;
    
    for(int i = 0; i < 3; i++)
        cin >> a[i];
    for(int i = 0; i < 3; i++)
        cin >> b[i];
    
    for(int i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
            ap++;
        else if(a[i] < b[i])
            bp++;
    }
    cout << ap << " " << bp << endl;
    return 0;
}