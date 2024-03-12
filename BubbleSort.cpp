#include <iostream>
using namespace std;

void bubbleSort(int array[], int n);

void bubbleSort(int array[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap; 
            }
        }
    }
    cout << "The array of integers after the Bubble Sort is: \n";
    for(int i = 0; i < n; i++) {
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
    cout << "The array of integers before BubbleSort:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    bubbleSort(array, n);
    return 0;
}
