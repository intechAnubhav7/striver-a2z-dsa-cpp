// Time Complexity: O(size) where 'size' is the number of elements in the array.
// Space Complexity: O(1) auxiliary space.
#include<bits/stdc++.h>
using namespace std;
int largest_number(int arr[] , int size){
    int largest = arr[0];
    for(int i=0; i<size; i++){ // O(size) time
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[]={12 , 18 , 6 , 45 , 8};
    int size= sizeof(arr)/ sizeof(arr[0]);
    cout << "The largest element is : " << largest_number(arr , size) << endl;
    return 0;
}
