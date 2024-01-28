def find_smallest_largest(numbers):
    """Find the smallest and largest numbers in a list."""
    if not numbers:
        return None, None  # Return None if the list is empty

    smallest = largest = numbers[0]

    for num in numbers:
        if num < smallest:
            smallest = num
        elif num > largest:
            largest = num

    return smallest, largest

# Get input from the user
try:
    # Input numbers separated by spaces, e.g., "1 2 3 4 5"
    num_list = [int(x) for x in input("Enter a list of numbers separated by spaces: ").split()]
except ValueError:
    print("Invalid input. Please enter valid numbers.")
    exit()

# Find the smallest and largest numbers in the list
smallest, largest = find_smallest_largest(num_list)

# Display the results
if smallest is not None and largest is not None:
    print(f"Smallest number: {smallest}")
    print(f"Largest number: {largest}")
else:
    print("The list is empty.")
