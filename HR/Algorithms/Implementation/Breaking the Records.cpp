#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> breakingRecords(vector <int> score) {
    int hCnt = 0, rCnt = 0;
    int rScore = score[0];
    int hScore = score[0];
    for(int i = 1; i < score.size(); i++)
    {
        if(rScore < score[i])
        {
            rScore = score[i];
            rCnt++;
        }
        if(hScore > score[i])
        {
            hScore = score[i];
            hCnt++;
        }
    }
    vector<int> ans;
    ans.push_back(rCnt);
    ans.push_back(hCnt);
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}
