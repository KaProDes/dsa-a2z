#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){
    // A: [low,mid]
    // B: [mid+1,high]

    int i = low; // starting point of sub array A
    int j = mid+1; // starting point of sub array B

    // extra storage need to store after merging
    vector<int> merged;
    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            merged.push_back(arr[i]);
            i++;
        }
        else{
            merged.push_back(arr[j]);
            j++;
        }
    }

    // left over elements in A
    while(i <= mid){
        merged.push_back(arr[i]);
        i++;
    }

    // left over elements in B
    while(j <= high){
        merged.push_back(arr[j]);
        j++;
    }

    // place sorted elements from merged into the original arrr
    int k = low;
    for(int num : merged){
        arr[k++] = num;
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    // Base case
    if(low >= high) 
        return;
    int mid = low + (high-low)/2;

    // A: [low,mid]
    mergeSort(arr, low, mid);

    // B: [mid+1,high]
    mergeSort(arr, mid+1, high);
    merge(arr,low,mid,high); // A: [low,mid], B: [mid+1,high]
}