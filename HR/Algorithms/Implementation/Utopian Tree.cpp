#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int tree_height = 1;
        int cycle;
        cin >> cycle;

        for(int j = 1; j <= cycle; j++)
        {
            if(j%2 == 0)
                tree_height += 1;
            else
                tree_height *= 2;

        }
        cout << tree_height << endl;
    }
    return 0;
}
