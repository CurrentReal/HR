#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> m(n);
    for(int i = 0; i < n; i++)
            cin >> m[i];

    for(int i = 1; i < n-1; i++)
        for(int j = 1; j < n-1; j++)
            if( (m[i][j] > m[i][j-1]) && (m[i][j] > m[i][j+1])
              && (m[i][j] > m[i-1][j]) && (m[i][j] > m[i+1][j]) )
                m[i][j] = 'X';

    for(int i = 0; i < n; i++)
        cout << m[i] << endl;

    return 0;
}
