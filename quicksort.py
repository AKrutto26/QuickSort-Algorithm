def partition(arr, low, high):
    pivot = arr[high]  # Pivot element
    i = low - 1  # Index of smaller element

    for j in range(low, high):
        if arr[j] < pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def quicksort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)

        quicksort(arr, low, pi - 1)  # Recursively sort elements before partition
        quicksort(arr, pi + 1, high)  # Recursively sort elements after partition

# Example usage
arr = [2, 9, 8, 1, 6, 5, 4, 3, 7]
quicksort(arr, 0, len(arr) - 1)
print("Sorted array:", arr)
