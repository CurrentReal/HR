#include <iostream>
#include <vector>
using namespace std;

vector<string> v = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
       "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
       "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six",
       "twenty seven", "twenty eight", "twenty nine" };

void Solve(int hour, int min) {
    int temp = min;
    string mid = " past ";
    if(min > 30)
    {
        min = 60 - min;
        hour += 1;
        mid = " to ";
    }
    if(hour > 12)
        hour = 1;

    if(min == 0)
        cout << v[hour] << " o' clock" << endl;
    else if(min == 1)
        cout << "one minute" << mid << v[hour] << endl;
    else if(min == 15)
        cout << "quarter" << mid << v[hour] << endl;
    else if(min == 30)
        cout << "half past " << v[hour] << endl;
    else
        cout << v[min] << " minutes" << mid << v[hour] << endl;
}

int main() {
    int hour, min;
    cin >> hour >> min;

    Solve(hour, min);
    return 0;
}
