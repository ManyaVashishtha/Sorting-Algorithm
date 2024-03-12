#include <stdio.h>

void bubbleSort (int array[], int n);

void bubbleSort (int array[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if (array[j]>array[j+1]){
               int swap= array[j];
               array[j]=array[j+1];
               array[j+1]= swap; 
            }
        }
    }
    printf("The array of integers after the Bubble Sort is: \n");
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
    printf("The array of integers before BubbleSort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    bubbleSort(array, n);
    return 0;
}
