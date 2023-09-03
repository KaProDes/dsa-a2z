void selectionSort(vector<int>&arr) {
    int n = arr.size();
    for(int i=0;i<n; i++){ // i stores first element of unsorted part
        int j = i;         // j iterates over the unsorted part to find minInd
        int minInd = j;    // minInd will store idx of min element in unsorted part
        while(j < n){      // j goes from i to n-1 (traverses over all idx of unsorted part)
            if(arr[minInd] > arr[j]){ // compare and update minInd
                minInd = j;
            }
            j++;
        }
        // swap i(idx of first of unsorted part)
        // and minInd(idx of smallest in unsorted part)
        int temp = arr[i];
        arr[i] = arr[minInd];
        arr[minInd] = temp;
    }
}