#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Rotate(vector<int> &A, int i1, int i2, int i3) {
    int tmp = A[i1];
    A[i1] = A[i2];
    A[i2] = A[i3];
    A[i3] = tmp;
}

int main() {
    int testCase;
    cin >> testCase;
    for(int testCase_i = 0; testCase_i < testCase; testCase_i++) {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int A_i = 0; A_i < N; A_i++)
            cin >> A[A_i];                        

        for(int i = 0; i < N-2; i++) {
            for(int j = 0; j <N-2; j++) {
                if(A[j] < A[j+1] && A[j] < A[j+2]) {
                    // No Rotate
                }
                else if(A[j+1] <= A[j+2] && A[j+1] <= A[j]) {
                    Rotate(A, j+1, j+2, j);
                }
                else if(A[j+2] <= A[j] && A[j+2] <= A[j+1]) {
                    Rotate(A, j+2, j+1, j);
                }
            }
        }

        if(is_sorted(A.begin(), A.end()))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
