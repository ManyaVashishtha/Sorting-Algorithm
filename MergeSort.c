#include <stdio.h>

void merge(int array[], int l, int m, int r);

void merge(int array[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m, L[n1], R[n2], i, j, k;
    for (i = 0; i < n1; i++){
        L[i] = array[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = array[m + 1 + j];
    }
    for (i = j = 0, k = l; i < n1 && j < n2;){
        array[k++] = L[i] <= R[j] ? L[i++] : R[j++];
    }
    while (i < n1) array[k++] = L[i++];
    while (j < n2) array[k++] = R[j++];

}

void mergeSort(int array[], int l, int r);

void mergeSort(int array[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }
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
    printf("The array of integers before MergeSort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    mergeSort(array, 0, n-1);
    printf("The array of integers after MergeSort: \n");
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
