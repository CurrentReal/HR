#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int x;
    vector<int> A(10001);
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        A[x]++;
    }

    int m;
    cin >> m;
    vector<int> B(10001);
    for(int i = 0; i < m; i++)
    {
        cin >> x;
        B[x]++;
    }
    
    for(int i = 0; i < A.size(); i++)
        if(B[i] > A[i])
            cout << i << " ";
    return 0;
}
/*
int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];

    int m;
    cin >> m;
    vector<int> B(m);
    for(int i = 0; i < m; i++)
        cin >> B[i];
    
    vector<int> v(10001, 0);
    for(auto iter = A.begin(); iter != A.end(); iter++)
        v[(*iter)]--;
    for(auto iter = B.begin(); iter != B.end(); iter++)
        v[(*iter)]++;
    
    for(int i = 0; i < v.size(); i++)
        if(v[i] != 0)
            cout << i << " ";
    return 0;
}
*/