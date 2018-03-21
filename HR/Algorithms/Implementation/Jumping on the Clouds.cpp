#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> clouds(n);
    for(int i = 0; i < n; i++)
        cin >> clouds[i];

    int start = 0;
    int cnt = 0;
    while(start < n-1)
    {
        if(clouds[start+1] == 0)
        {
            if(clouds[start+2] == 0)
                start += 2;
            else
                start += 1;
        }
        else
            start += 2;

        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
