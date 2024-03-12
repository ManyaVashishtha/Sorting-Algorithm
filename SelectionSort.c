#include <stdio.h>

void selectionSort (int array[], int n);

void selectionSort (int array[], int n){
    for(int i=0; i<n-1; i++){
        int minimum=i;
        for(int j=i+1; j<n; j++){
            if (array[j]<array[minimum]){
               minimum=j;
            }
        }
        int swap= array[minimum];
        array[minimum]=array[i];
        array[i]=swap;
    }
    printf("The array of integers after the Selection Sort is: \n");
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements to be entered in the array: ");
    scanf("%d", &n);
    int array[n]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("The array of integers before SelectionSort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    selectionSort(array, n);
    return 0;
}
