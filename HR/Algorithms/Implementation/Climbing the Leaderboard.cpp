#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for(int i = 0; i < n; i++)
        cin >> scores[i];
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int i = 0; i < m; i++)
        cin >> alice[i];

    vector<int> rank(n, 1);
    for(int i = 1; i < n; i++)
    {
        if(scores[i] == scores[i-1])
            rank[i] = rank[i-1];
        else if(scores[i] < scores[i-1])
            rank[i] = rank[i-1] + 1;
    }
    int aliceRank, scoreIdx = n - 1;
    for(int i = 0; i < m; i++)
    {
        for(int j = scoreIdx; j >= 0; j--) // j = n-1 Timeout
        {
            if(alice[i] < scores[j])
            {
                aliceRank = rank[j] + 1;
                scoreIdx = j;
                break;
            }
            else if(alice[i] == scores[j])
            {
                aliceRank = rank[j];
                scoreIdx = j;
                break;
            }
            else // alice[i] > scores[j]
            {
                if(aliceRank == 1)
                    break;
                aliceRank = rank[j] - 1;
                scoreIdx = j;
            }
        }
        cout << aliceRank << endl;
    }
    return 0;
}
