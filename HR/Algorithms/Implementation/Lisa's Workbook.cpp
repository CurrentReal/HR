#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> wb(n);
    for(int i = 0; i < n; i++)
        cin >> wb[i];

    int page = 1, cnt = 0;
    for(int i = 0; i < n; i++)
    {
        int temp = wb[i], kCnt = 1;
        for(int j = 1; j <= wb[i]; j++)
        {
            if(j == page)
                cnt++;

            if(temp > k && kCnt == k)
            {
                temp -= k;
                page++;
                kCnt = 0;
            }
            kCnt++;
        }
        page++;
    }

    cout << cnt << endl;
    return 0;
}
