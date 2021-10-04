import java.util.Arrays;

public class InsertionSort{
    public static void main(int arr[], int length){
        //Base Case
        if (n <= 1){
            return;
        }
        //Sort the first n-1 elements
        insertionSort(arr, length-1);
        int last = arr[length-1];
        int j = length-2;

        //Shift the elements of the sorted part that are greater than the value to the right
        while (j >= 0 && arr[j] > last)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = last;
    }
}
