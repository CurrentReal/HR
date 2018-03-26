#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    long black, white, x, y, z, price = 0;
    for(int i = 0; i < testCase; i++)
    {
        cin >> black >> white;
        cin >> x >> y >> z;

        if(z > abs(x-y))
            price = (black * x) + (white * y);
        else if(x > y)
            price = (black * (y + z)) + (white * y);
        else
            price = (black * x) + (white * (x + z));

        cout << price << endl;
    }
    return 0;
}
