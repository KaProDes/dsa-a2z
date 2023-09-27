public class Solution {
    public static void recursiveInsertionSort(int[] arr, int endIdx){
        
        // Base case return when single element
        if(endIdx == 0){
            return;
        }
        
        // Call recursion first
        recursiveInsertionSort(arr, endIdx-1);

        // Insert endIdx element in it's rightful place
        // Going from endIdx towards 0
        int idx = endIdx;
        while(idx > 0 && arr[idx-1] > arr[idx]){
            int temp = arr[idx];
            arr[idx] = arr[idx-1];
            arr[idx-1] = temp;
            idx--;
        }
    }

    public static void insertionSort(int[] arr, int n) {
        recursiveInsertionSort(arr, n-1);
    }
}