// Insertion Sort
// Time Complexity: O(n^2)
// Best Case: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[] , int n){
    int j , temp;
    for(int i=0; i<n-1;  i++){
        j=i;
        while(j > 0 && arr[j-1]>arr[j]){
            temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    insertion_sort(arr , n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
return 0;
}
