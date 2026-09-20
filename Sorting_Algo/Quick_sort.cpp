/*
 * Time Complexity:
 *   - Best Case: O(N log N)
 *   - Average Case: O(N log N)
 *   - Worst Case: O(N^2) (When the array is already sorted or reverse sorted)
 * 
 * Space Complexity:
 *   - Auxiliary Space: O(1)
 *   - Algorithmic Stack Space: O(N) worst-case, O(log N) average-case
 */

#include<bits/stdc++.h>

using namespace std;

// Partition function
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // Use arr[low] instead of fixed arr[0]
    int i = low;
    int j = high;

    while (i < j) {
        // Move i forward while elements are smaller than or equal to pivot
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        // Move j backward while elements are greater than pivot
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    // Place pivot in its correct sorted position
    swap(arr[low], arr[j]);
    return j;
}

// QuickSort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) { // Fixed: condition must be low < high, not i < j
        int partition_index = partition(arr, low, high);
        quickSort(arr, low, partition_index - 1);
        quickSort(arr, partition_index + 1, high); // Fixed typo from 'aq' to 'quickSort'
    }
}

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
