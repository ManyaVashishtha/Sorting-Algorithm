def bubble_sort(array):
    n = len(array)
    for i in range(n - 1):
        for j in range(n - i - 1):
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]
    print("The array of integers after the Bubble Sort is:")
    print(*array)

def main():
    n = int(input("Enter the number of elements to be entered in the array: "))
    array = []
    print(f"Enter {n} elements:")
    for i in range(n):
        element = int(input(f"Enter element {i + 1}: "))
        array.append(element)
    print("The array of integers before BubbleSort:")
    print(*array)
    bubble_sort(array)

if __name__ == "__main__":
    main()
