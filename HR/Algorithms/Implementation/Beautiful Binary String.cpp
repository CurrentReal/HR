#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string b;
    cin >> b;
    int cnt = 0;
    for(int i = 2; i < n; i++)
    {
        if(b[i-2] == '0' && b[i-1] == '1' && b[i] == '0')
        {
            cnt++;
            b[i] = '1';
        }
    }
    cout << cnt << endl;
    return 0;
}
