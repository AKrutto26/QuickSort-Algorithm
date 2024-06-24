import random

# Function to generate a list of random numbers
def generate_random_list(size):
    return [random.randint(0, 10) for _ in range(size)]

# Function to perform quicksort
def quicksort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[-1]
    left = [x for x in arr[:-1] if x < pivot]
    middle = [x for x in arr[:-1] if x == pivot]
    right = [x for x in arr[:-1] if x > pivot]
    return quicksort(left) + middle + quicksort(right)

# Generate a list of random numbers
random_list = generate_random_list(10)

# Print the original list
print("Original List: ", random_list)

# Perform quicksort
sorted_list = quicksort(random_list)

# Print the sorted list
print("Sorted List: ", sorted_list)