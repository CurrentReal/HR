#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> c(n);
    for(int i = 0; i < n; i++)
        cin >> c[i];

    int energy = 100;
    int movePoint = 0;
    bool flag = true;
    while(flag)
    {
        movePoint += k;
        if(movePoint >= n) {
            movePoint = 0;
            flag = false;
        }
        energy -= 1;
        if(c[movePoint] == 1)
            energy -= 2;
    }

    cout << energy << endl;
    return 0;
}

/* Editorial
#include <iostream>
using namespace std;

int main() {
    int n, k, ci;
    cin >> n >> k;
    int thunderCloud = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> ci;
        if(i % k == 0)
            thunderCloud += ci;
    }
    cout << 100 - n/k - thunderCloud*2 << endl;
    return 0;
}
*/
