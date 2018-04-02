#include <iostream>
using namespace std;

/*       max           min
t =  1 ~ 3  / v =  3 ~ 1
t =  4 ~ 9  / v =  6 ~ 1
t = 10 ~ 21 / v = 12 ~ 1
--------------------------
t=1 + v=3  -> next t = 4, max t = 9
max t=9 - t=4 -> 5
5 + 1 = 6 (== v)
*/

int main(){
    long t;
    cin >> t;

    // 1
    /*
    long maxT = 3, v = 6;
    while(t > maxT) {
        maxT += v;
        v *= 2;
    }
    cout << (maxT - t + 1) << endl;
    */

    // 2
    long v = 3;
    while(t > v) {
        t -= v;
        v *= 2;
    }
    cout << (v - t  + 1) << endl;

    return 0;
}
