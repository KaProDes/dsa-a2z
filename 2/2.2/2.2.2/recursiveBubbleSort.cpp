void recursiveBubbleSort(vector<int> &arr, int endIdx){
    // base case
    if(endIdx == 0){
        return;
    }

    // recursive case
    for(int i=0;i<=endIdx-1;i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    recursiveBubbleSort(arr,endIdx-1);
}

void bubbleSort(vector<int> &arr, int n) 
{
    recursiveBubbleSort(arr,n-1);
}