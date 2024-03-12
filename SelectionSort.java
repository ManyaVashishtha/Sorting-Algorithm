import java.util.Scanner;

public class SelectionSort {
    public static void selectionSort(int array[]) {
        int n = array.length;
        for (int i = 0; i < n - 1; i++) {
            int minimum = i;
            for (int j = i + 1; j < n; j++) {
                if (array[j] < array[minimum]) {
                    minimum = j;
                }
            }
            int swap = array[minimum];
            array[minimum] = array[i];
            array[i] = swap;
        }
        System.out.println("The array of integers after the Selection Sort is: ");
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements to be entered in the array: ");
        int n = scanner.nextInt();
        int[] array = new int[n];
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            array[i] = scanner.nextInt();
        }
        System.out.println("The array of integers before SelectionSort:");
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
        selectionSort(array);
    }
}
