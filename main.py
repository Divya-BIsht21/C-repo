import sys

def word_count(filename):
    try:
        with open(filename, 'r') as file:
            text = file.read()
            words = text.split()
            return len(words)
    except FileNotFoundError:
        print(f"Error: File '{filename}' not found.")
        sys.exit(1)

if __name__ == "__main__":
    # Check if the correct number of command line arguments is provided
    if len(sys.argv) != 2:
        print("Usage: python word_count.py <input_file>")
        sys.exit(1)

    input_filename = sys.argv[1]

    # Perform word count and display the result
    count = word_count(input_filename)
    print(f"Word count in {input_filename}: {count}")
