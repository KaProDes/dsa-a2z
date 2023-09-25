public class Solution {
    public static void insertionSort(int[] arr, int n) {
        for(int i=1;i<n;i++){ // start at 1 since there is no point in inserting 1 element
            // create variable j which will backwards from run from i to 1 
            int j = i;
            // j will compare and swap with left neighbour until it is needed/possible
            while(j>=1 && arr[j-1] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
    }
}