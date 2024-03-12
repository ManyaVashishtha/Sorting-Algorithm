import java.util.Scanner;

public class MergeSort {
    static void merge(int array[], int l, int m, int r) {
        int n1 = m - l + 1, n2 = r - m, L[] = new int[n1], R[] = new int[n2], i, j, k;
        for (i = 0; i < n1; i++) L[i] = array[l + i];
        for (j = 0; j < n2; j++) R[j] = array[m + 1 + j];
        for (i = j = 0, k = l; i < n1 && j < n2;)
            array[k++] = L[i] <= R[j] ? L[i++] : R[j++];
        while (i < n1) array[k++] = L[i++];
        while (j < n2) array[k++] = R[j++];
    }

    static void mergeSort(int array[], int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2;
            mergeSort(array, l, m);
            mergeSort(array, m + 1, r);
            merge(array, l, m, r);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements to be entered in the array: ");
        int n = scanner.nextInt();
        int array[] = new int[n];
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            array[i] = scanner.nextInt();
        }
        System.out.println("The array of integers before MergeSort:");
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
        mergeSort(array, 0, n - 1);
        System.out.println("The array of integers after MergeSort:");
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
    }
}
