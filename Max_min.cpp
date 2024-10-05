// Given an array of integers, we have to find the maximum and minimum elements in the array.

// EXAMPLE:-  

// Array :-   { 4, 5, 8, 9, 10, 2} 
// Maximum = max(maximum, arr[i])
// Minimum = min(minimum, arr[i])

// Maximum Element := 10 
// Minimum Element :- 2 


// 0 1 2 3 4 5 

#include<bits/stdc++.h>
using namespace std;

// Maximum 
// minimum

pair<int,int> getMax_Min(int arr[],int n){
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(int i=0;i<n;i++){
        maximum = max(maximum,arr[i]);
        minimum = min(minimum,arr[i]);
    }
    return {maximum, minimum};
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum of array is = "<<getMax_Min(arr,n).first<<endl;
    cout<<"Minumum element of array is = "<<getMax_Min(arr,n).second;

}
