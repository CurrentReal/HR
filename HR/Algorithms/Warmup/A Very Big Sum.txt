#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    long sum = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    
    cout << sum << endl;
    return 0;
}