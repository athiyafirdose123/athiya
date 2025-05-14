# Function to reverse an array
def reverse_array(arr):
    return arr[::-1]

# Main program
if __name__ == "__main__":
    # Initialize the array with 5 elements
    array = [1, 2, 3, 4, 5]

    # Print the original array
    print("Original array:", array)

    # Reverse the array using the function
    reversed_array = reverse_array(array)

    # Print the reversed array
    print("Reversed array:", reversed_array)
Original array: [1, 2, 3, 4, 5]
Reversed array: [5, 4, 3, 2, 1]
