#include <iostream>
using namespace std;

int Solve(int n, int p) {
    int start = 0, cnt = 0;

    if(n == p)
        return start;

    if(n/2 >= p) {
        for(int i = start; start < n/2; start += 2) {
            if(start == p)
                break;
            else if(start+1 == p) {
                if(p%2 == 0)
                    cnt++;
                break;
            }
            cnt++;
        }
        start = cnt;
    } else {
        start = n; // n/2 < p
        for(int i = start; start >= n/2; start -= 2) {
            if(start == p)
                break;
            else if(start-1 == p) {
                if(n%2 == 0)
                    cnt++;
                break;
            }
            cnt++;
        }
        start = cnt;
    }

    return start;
}
/* Editorial Code
int Solve(int n, int p) {
    int front = p/2;
    int back;

    if(n%2 == 0)
        back = (n - p +1) / 2;
    else
        back = (n - p) / 2;

    return min(front, back);
}
*/
int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;

    cout << Solve(n, p) << endl;
    return 0;
}
