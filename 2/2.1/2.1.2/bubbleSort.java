public class Solution {
    public static void bubbleSort(int[] arr, int n) {
        for(int i=n-1;i>=1;i--){    // Mind the edge case where i >= 1 (at least 2 elements)
            for(int j=0;j<=i-1 ;j++){  // j can max be n-2 (there is j+1 = n-2+1 = n-1)
                if(arr[j] > arr[j+1]){ // compare adjacent and swap if out of order
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
}