function bubbleSort(array) {
    const n = array.length;
    for(let i = 0; i < n - 1; i++) {
        for(let j = 0; j < n - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                let swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }
    console.log("The array of integers after the Bubble Sort is: ");
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
            if(array.length === n) {
                console.log("The array of integers before BubbleSort:");
                console.log(array.join(" "));
                bubbleSort(array);
                rl.close();
            }
        });
    });
}

main();
