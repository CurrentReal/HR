#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        bool isPossible = next_permutation(s.begin(), s.end());
        if(isPossible)
            cout << s << endl;
        else
            cout << "no answer" << endl;
    }
    return 0;
}
