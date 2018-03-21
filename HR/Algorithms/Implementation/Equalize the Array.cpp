#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(100, 0);
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        A[a]++;
    }

    cout << n - *max_element(A.begin(), A.end()) << endl;
    return 0;
}
