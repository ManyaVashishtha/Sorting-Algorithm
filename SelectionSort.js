function selectionSort(array) {
    const n = array.length;
    for (let i = 0; i < n - 1; i++) {
        let minimum = i;
        for (let j = i + 1; j < n; j++) {
            if (array[j] < array[minimum]) {
                minimum = j;
            }
        }
        let swap = array[minimum];
        array[minimum] = array[i];
        array[i] = swap;
    }
    console.log("The array of integers after the Selection Sort is: ");
    console.log(array.join(" "));
}

function main() {
    const readline = require('readline');
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question("Enter the number of elements to be entered in the array: ", function(n) {
        n = parseInt(n);
        let array = [];
        console.log(`Enter ${n} elements:`);
        rl.on('line', function(input) {
            array.push(parseInt(input));
            if (array.length === n) {
                console.log("The array of integers before SelectionSort:");
                console.log(array.join(" "));
                selectionSort(array);
                rl.close();
            }
        });
    });
}

main();
