#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int maxCnt = 0, teamCnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            int topicCnt = 0;
            for(int k = 0; k < m; k++)
            {
                if( v[i][k] == '1' || v[j][k] == '1')
                    topicCnt++;
            }

            if(maxCnt < topicCnt)
            {
                maxCnt = topicCnt;
                teamCnt = 1;
            }
            else if(maxCnt == topicCnt)
                teamCnt++;
        }
    }

    cout << maxCnt << endl;
    cout << teamCnt << endl;

    return 0;
}
