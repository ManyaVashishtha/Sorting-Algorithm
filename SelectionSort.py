def selection_sort(array):
    n = len(array)
    for i in range(n - 1):
        minimum = i
        for j in range(i + 1, n):
            if array[j] < array[minimum]:
                minimum = j
        array[i], array[minimum] = array[minimum], array[i]
    print("The array of integers after the Selection Sort is:")
    print(*array)

def main():
    n = int(input("Enter the number of elements to be entered in the array: "))
    array = []
    print(f"Enter {n} elements:")
    for i in range(n):
        element = int(input(f"Enter element {i + 1}: "))
        array.append(element)
    print("The array of integers before SelectionSort:")
    print(*array)
    selection_sort(array)

if __name__ == "__main__":
    main()
