#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

/*
How about this logic:

Step I. get the 3 array and reverse them, create a new array out of an existing array with each element is sum of all the previous elements. eg: [3,2,1,1,1] -> [1,1,1,2,3] -> [1,2,3,5,8]

So the 3 new array formed would be [1,2,3,5,8] [2,5,9] [1,5,6,7]

Step II. Again reverse the array [8,5,3,2,1] [9,5,2] [7,6,5,1]

Step III. Take the smallest array i.e. [9,5,2] traverse the smallest array and search element in the other 2 array - if the element is existing in other 2 array, STOP there and return the number.

Eg. Here I start with elem - 9 : Which is not existing in other 2 array. Next I start with elem - 5 : it is existing in other 2 array.

Wolla! 5 is my NUMBER!
*/

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    
    vector<int> h1(n1), h2(n2), h3(n3);
    for(int i = 0; i < n1; i++) 
        cin >> h1[i];
    for(int i = 0; i < n2; i++)
        cin >> h2[i];
    for(int i = 0; i < n3; i++)
        cin >> h3[i];
    
    // Reverse and Add pre value
    for(int i = n1-2; i >= 0; i--)
        h1[i] += h1[i+1];
    for(int i = n2-2; i >= 0; i--)
        h2[i] += h2[i+1];
    for(int i = n3-2; i >= 0; i--)
        h3[i] += h3[i+1];
    
    // Search same index
    int i = 0, i2 = 0, i3 = 0;
    while( h1[i] != h2[i2] || h2[i2] != h3[i3] ) 
    {         
        if( h1[i] > h2[i2] || h1[i] > h3[i3] )
            i++;
        else if( h2[i2] > h1[i] || h2[i2] > h3[i3] )
            i2++;
        else if( h3[i3] > h1[i] || h3[i3] > h2[i2])
            i3++;
    }
    
    cout << h1[i] << endl;
    return 0;
}
/*
int SameMaxHeight(vector<int>& minSizeV, vector<int>& anotherV1, vector<int>& anotherV2)
{
    for(int i = 0; i < minSizeV.size(); i++)
    {
        auto r1 = find(anotherV1.begin(), anotherV1.end(), minSizeV[i]);
        auto r2 = find(anotherV2.begin(), anotherV2.end(), minSizeV[i]);
        if(r1 != anotherV1.end() && r2 != anotherV2.end())
            return minSizeV[i];
    }
    return 0;
}
int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    
    vector<int> h1(n1), h2(n2), h3(n3);
    for(int i = 0; i < n1; i++) 
        cin >> h1[i];
    for(int i = 0; i < n2; i++)
        cin >> h2[i];
    for(int i = 0; i < n3; i++)
        cin >> h3[i];
    
    // Reverse and Add pre value
    for(int i = n1-2; i >= 0; i--)
        h1[i] += h1[i+1];
    for(int i = n2-2; i >= 0; i--)
        h2[i] += h2[i+1];
    for(int i = n3-2; i >= 0; i--)
        h3[i] += h3[i+1];
    
    int res;
    if(n1 <= n2 && n1 <= n3)
        res = SameMaxHeight(h1, h2, h3);
    else if(n2 < n1 && n2 < n3)
        res = SameMaxHeight(h2, h1, h3);
    else if(n3 < n1 && n3 < n2)
        res = SameMaxHeight(h3, h1, h2);

    cout << res << endl;
    return 0;
}
*/