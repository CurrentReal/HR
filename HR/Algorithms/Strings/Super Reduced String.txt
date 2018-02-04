#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    
    int i = 0;
    while(s.size() != i)
    {
        if(s[i] == s[i+1])
        {
            s.erase(i, 2);
            if(s.empty())
            {
                cout << "Empty String" << endl;
                return 0;
            }
            i = 0;
        }
        else
            i++;
    }
    cout << s << endl;
    return 0;
}