#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*We are  interested in the cities that are in the middle of two  space stations
    as this city will be furthest for that set of two space stations

            City         : 0,1,2,3,5,6,7,8
            SpaceStation : .,.,2,.,.,.,7,.

    In the example above, 5 is in the middle of space station 2 and 7 and the distance to
    the closest one is 2 and can be calculated as (7-2)/2 = 2 */
int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    sort(c.begin(), c.end());
    int maxDis = c[0];
    for(int i = 1; i < m; i++)
    {
        int distance = (c[i] - c[i-1]) / 2;
        maxDis = max(maxDis, distance);
    }
    int lastStationDis = n - c[m-1] - 1;
    maxDis = max(maxDis, lastStationDis);

    cout << maxDis << endl;
    return 0;
}
