#include <iostream>
#include <vector>
using namespace std;

/*
The following 'easy' cases can occur:
1. String size is 1 and it is '_' ---> YES
2. String size is 1 and it is a color ---> NO
3. String contains only underscores ---> YES
If condition 1, 2, and 3 don't happen every entry in HashMap is checked and the following cases can occur:
4. A ladybug is alone anc can't have a pair ---> NO
5. String does not contain any underscore:
- parse the string and count how many times a ladybug appears in consecutive order
- next ladybug has different colors:
- there are ladybugs with same color in another part of array and they can't form a pair
---> NO
6. If none of the above happened, we can move the ladybugs and all of them are happy ---> YES
*/

bool IsHappy(string s) {
    vector<int> alpha(26);
    for(int i = 0; i < s.size(); i++)
        if(s[i] != '_')
            alpha[s[i] - 'A']++; // 0 ~ 26

    for(int i = 0; i < alpha.size(); i++)
        if(alpha[i] == 1)
            return false; // 1 Color -> NO

    int underBar = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '_')
            underBar++;
    if(underBar == 0) {
        for(int i = 1; i < s.size()-1; i++)
        {
            if(s[i] != s[i-1] && s[i] != s[i+1]) // No underBar && No pair -> NO
                return false;
        }
    }
    return true;
}
int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;

        if(IsHappy(b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
