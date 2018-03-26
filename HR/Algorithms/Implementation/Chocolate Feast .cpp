#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n, c, m;
        cin >> n >> c >> m;
        int choco = n / c;
        int wrap = choco;

        while(wrap >= m)
        {
            wrap -= m;
            choco++;
            wrap++;
            int extraChoco = wrap / m;
            wrap = extraChoco + (wrap % m);
            choco += extraChoco;
            /* Editorial
            choco += wrap / m;
            wrap = (wrap / m) + (wrap % m);
            */
        }
        cout << choco << endl;
    }
    return 0;
}
