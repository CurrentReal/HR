#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string N;
        cin >> N;
        int cnt = 0;
        for(int j = 0; j < N.size(); j++)
        {
            int n = (int)N[j] - 48;
            int intN = stoi(N);
            if(n != 0 && intN % n == 0)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
