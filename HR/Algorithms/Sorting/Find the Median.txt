#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    sort(arr.begin(), arr.end());
    cout << arr[n/2] << endl;
    return 0;
}

// Disscutions
/*
int Partition(vector<int>& arr, int left, int right, int pivotIndex)
{
    int pivotValue = arr[pivotIndex];
    swap(arr[pivotIndex], arr[right]); // 피벗을 끝으로
    int storeIndex = left;
    for(int i = left; i < right; i++)
        if(arr[i] < pivotValue)
        {
            swap(arr[storeIndex], arr[i]);
            storeIndex++;
        }
    swap(arr[right], arr[storeIndex]); // 피벗을 최종 위치로
    return storeIndex;
}

int QuickSort(vector<int>& arr, int left, int right, int k)
{
    if(left == right)
        return arr[left];
    
    int pivotIndex = 0;
    int storeIndex = left;
    pivotIndex = Partition(arr, left, right, pivotIndex);
    
    if(k == pivotIndex)
        return arr[k];
    else if(k < pivotIndex)
        return QuickSort(arr, left, pivotIndex-1, k);
    else
        return QuickSort(arr, pivotIndex+1, right, k);
    
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    cout << QuickSort(arr, 0, n-1, n/2) << endl;
    return 0;
}
*/