#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void InitQueries(vector<int>& queries, string s){
    int repeatedCnt = 1;
    for(int i = 0; i < s.size(); i++){
    int sNum = int(s[i]) - 96;
    if(s[i] != s[i+1]){
        queries.push_back(sNum*repeatedCnt);
        repeatedCnt = 1;
    }
    else if(s[i] == s[i+1]){
        queries.push_back(sNum*repeatedCnt);
        repeatedCnt++;
        }
    }
}

void BinarySearch(vector<int>& queries, int n){
    sort(queries.begin(), queries.end());
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        bool isFound = binary_search(queries.begin(), queries.end(), x);
        cout << (isFound ? "Yes" : "No") << endl;
    }
}

void VectorFind(vector<int>& queries, int n){
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        vector<int>::iterator iter;
        iter = find(queries.begin(), queries.end(), x);
        cout << ((iter == queries.end()) ? "No" : "Yes") << endl;
    }
}
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;

    vector<int> queries;
    InitQueries(queries, s);
    //BinarySearch(queries, n);
    VectorFind(queries, n);

    return 0;
}
