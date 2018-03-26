#include <cmath>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int col = ceil(sqrt(s.size()));
    for(int i = 0; i < col; i++)
    {
        for(int j = i; j < s.size(); j+=col)
        {
            cout << s[j];
        }
        cout << " ";
    }
    return 0;
}
