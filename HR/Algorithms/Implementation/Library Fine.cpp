#include <iostream>
using namespace std;

int main() {
    int acDay, acMonth, acYear;
    cin >> acDay >> acMonth >> acYear;
    int exDay, exMonth, exYear;
    cin >> exDay >> exMonth >> exYear;

    int fine = 0;
    if(acYear == exYear) {
        if(acMonth == exMonth) {
            if(acDay == exDay) {
                fine = 0;
            }
            else {
                fine = (acDay - exDay) * 15;
                if(acDay < exDay)
                    fine = 0;
            }
        }
        else {
            fine = (acMonth - exMonth) * 500;
            if(acMonth < exMonth)
                fine = 0;
        }
    }
    else {
        fine = 10000;
        if(acYear < exYear)
            fine = 0;
    }

    cout << fine << endl;
    return 0;
}
