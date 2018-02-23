#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string time;
	cin >> time;
	
	int n = time.length();
	int hh, mm, ss;
	hh = (time[0] - '0') * 10 + (time[1] - '0');
	mm = (time[3] - '0') * 10 + (time[4] - '0');
	ss = (time[6] - '0') * 10 + (time[7] - '0');
	if (hh < 12 && time[8] == 'P')
		hh += 12;
	if (hh == 12 && time[8] == 'A')
		hh = 0;

    	printf("%02d:%02d:%02d\n", hh, mm, ss);
	return 0;
}
