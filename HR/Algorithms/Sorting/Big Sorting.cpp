#include cmath
#include cstdio
#include vector
#include iostream
#include algorithm
using namespace std;


int main() {
    int n;
    cin  n;
    vectorstring unsorted(n);
    for(int i = 0; i  n; i++)
        cin  unsorted[i];
    
    sort(unsorted.begin(), unsorted.end(), [](string a, string b)
         {
             if(a.size() == b.size())
                 return a  b;
             
             return a.size()  b.size();
         });
    
    for(auto a  unsorted)
        cout  a  endl;
    return 0;
}