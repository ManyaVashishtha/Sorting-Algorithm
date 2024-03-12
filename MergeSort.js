function merge(arr, l, m, r) {
    let n1 = m - l + 1, n2 = r - m, L = new Array(n1), R = new Array(n2), i, j, k;
    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
    for (i = j = 0, k = l; i < n1 && j < n2;) arr[k++] = L[i] <= R[j] ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

function mergeSort(arr, l, r) {
    if (l < r) {
        let m = l + Math.floor((r - l) / 2);
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

let arr = [12, 11, 13, 5, 6, 7];
console.log("Before sorting:", arr);
mergeSort(arr, 0, arr.length - 1);
console.log("After sorting:", arr);
