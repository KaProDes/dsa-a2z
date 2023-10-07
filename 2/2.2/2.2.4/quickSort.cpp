/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end) {
	// Write your code here
}

void quickSort(int arr[], int low, int high) {
    if(low >= high){
        return;
    }

    // Main logic
    int pivot = low;
    int i = low;
    int j = high;
    while (i < j) {
        // while lower or equal elements are seen i++
        // since they are in the correct place
        while(i<=j && arr[i] <= arr[pivot]){
            i++;
        }
        // while higher or equal elements are seen j--
        // since they are in the correct place
        while(i<=j && arr[j] >= arr[pivot]){
            j--;
        }

        // [*] Edge case, check that cross over has not happened
        if (i < j) {
            swap(arr[i],arr[j]);
        }
    }
    // For this you will have to dry run 
    swap(arr[pivot],arr[j]);

    // left call
    quickSort(arr, low, j-1);
    // right call
    quickSort(arr, j+1, high);
}