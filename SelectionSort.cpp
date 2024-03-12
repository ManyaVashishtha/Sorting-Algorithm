#include <iostream>
using namespace std;

void selectionSort(int array[], int n) {
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
    cout << "The array of integers after the Selection Sort is: \n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements to be entered in the array: ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "The array of integers before SelectionSort:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    selectionSort(array, n);
    return 0;
}
