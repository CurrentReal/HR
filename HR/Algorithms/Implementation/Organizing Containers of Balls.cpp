#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<int> > M(n,vector<int>(n));
        for(int i = 0; i < n;i++){
           for(int j = 0; j < n; j++){
              cin >> M[i][j];
           }
        }
        vector<int> row(n, 0), col(n, 0);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                row[i] += M[i][j];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                col[i] += M[j][i];

        sort(row.begin(), row.end());
        sort(col.begin(), col.end());

        if(row == col)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}
