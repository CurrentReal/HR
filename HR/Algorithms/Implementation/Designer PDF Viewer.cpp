#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++)
       cin >> h[h_i];
    string word;
    cin >> word;

    int maxH = 0;
    for(int i = 0; i < word.size(); i++)
        maxH = max(maxH, h[word[i]-'a']);

    cout << maxH * word.size() << endl;
    return 0;
}
