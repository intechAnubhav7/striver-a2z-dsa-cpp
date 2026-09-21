// Time Complexity: O(size) - Single pass method
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
int second_largest_number(int arr[] , int size){
    int largest = arr[0];
    int s_largest = -1; // Assumes array elements are positive numbers
    
    for(int i=0; i<size; i++){
        if(arr[i] > largest){
            s_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > s_largest){
            s_largest = arr[i];
        }
    }
    return s_largest;
}

int main(){
    int arr[]={14 , 5 , 24 , 6 , 21};
    int size = sizeof(arr)/ sizeof(arr[0]);
    cout << "The second largest element is : " << second_largest_number(arr , size) << endl;
    return 0;
}
