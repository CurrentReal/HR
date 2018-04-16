#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int s_i = 0;
    for(int i = 0; i < s.size(); i++)
        if(isupper(s[i]))
            s_i++;

    cout << ++s_i << endl;
    return 0;
}
