#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    int max = INT_MAX;
    int min = 0;
    long sum = 0;
    vector<int> v(5);
    for(int i = 0; i < 5; i++)
    {
        cin >> v[i];
        int var = v[i];
        if(var < max)
            max = var;
        if(var > min)
            min = var;
        
        sum += v[i];
    }
    
    cout << sum-min << " " << sum-max << endl;
    return 0;
}