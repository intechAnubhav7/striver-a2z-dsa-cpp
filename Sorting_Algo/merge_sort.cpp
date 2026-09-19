/**
 * TIME COMPLEXITY: 
 * - Best Case:    O(N log N)
 * - Average Case: O(N log N)
 * - Worst Case:   O(N log N)
 * (The array is always divided into two halves and takes linear time to merge.)
 * 
 * SPACE COMPLEXITY: O(N) 
 * (Auxiliary space is required for the temporary vector 'temp' used during merging.)
 */

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mS(vector<int> &arr, int low, int high){
    if(low >= high) return; 
    
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n) {
    mS(arr, 0, n - 1);
}

int main() {
    vector<int> data = {38, 27, 43, 3, 9, 82, 10};
    int n = data.size();

    cout << "Original array: ";
    for (int num : data) cout << num << " ";
    cout << endl;

    mergeSort(data, n);

    cout << "Sorted array:   ";
    for (int num : data) cout << num << " ";
    cout << endl;

    return 0;
}
