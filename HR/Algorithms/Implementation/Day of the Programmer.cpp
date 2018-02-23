#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
4로 나누어 떨어지는 년도는 윤년이다
그 중 100으로 나누어 떨어지는 년도는 윤년이 아니다

400으로 나누어 떨어지는 년도는 무조건 윤년이다

31 28 31 30 31 30 31 31 = 243 (윤년아님)
31 29 31 30 31 30 31 31 = 244 (윤년)

256 - 243 = 13
256 - 244 = 12
*/
bool solve(int year) {
    bool result;
    if(year < 1918)
        result = (year%4 == 0);
    else
        result = (year%100 != 0 && year%4 == 0) || (year%400 == 0);

    return result;
}

int main() {
    int year;
    cin >> year;

    if(year == 1918) {
        cout << "26.09.1918" << endl;
        return 0;
    }

    bool result = solve(year);
    if(result) // 윤년
        cout << "12.09." << year << endl;
    else // 아님
        cout << "13.09." << year << endl;
    return 0;
}
