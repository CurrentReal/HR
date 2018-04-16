#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string pass;
    cin >> pass;

    bool isDigit = 0, isLower = 0, isUpper = 0, isSpeci = 0;
    for(int i = 0; i < n; i++)
    {
        if(isdigit(pass[i])) isDigit = true;
        else if(islower(pass[i])) isLower = true;
        else if(isupper(pass[i])) isUpper = true;
        else isSpeci = true;
    }
    int strongPassCnt = 0;

    if(!isDigit) strongPassCnt++;
    if(!isLower) strongPassCnt++;
    if(!isUpper) strongPassCnt++;
    if(!isSpeci) strongPassCnt++;

    if((pass.size() + strongPassCnt) < 6)
    {
        int extra = 6 - (pass.size() + strongPassCnt);
        cout << strongPassCnt + extra << endl;
    }
    else
        cout << strongPassCnt << endl;
    return 0;
}
