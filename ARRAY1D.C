#include <stdio.h>
void displayArray(int arr[], int size) {int i;
    printf("Array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertElement(int arr[], int* size, int position, int value) {int i;
    if (position < 0 || position > *size) {
	printf("Invalid position. Insertion failed.\n");
	return;
    }
    for (i = *size - 1; i >= position; i--) {
	arr[i + 1] = arr[i];
    }
    arr[position] = value;
    (*size)++;
    printf("Element inserted successfully.\n");
}
void deleteElement(int arr[], int* size, int position) { int i;
    if (position < 0 || position >= *size) {
	printf("Invalid position. Deletion failed.\n");
	return;
    }
    for ( i = position; i < *size - 1; i++) {
	arr[i] = arr[i + 1];
    }
    (*size)--;
    printf("Element deleted successfully.\n");
}
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    printf("Array reversed successfully.\n");
}
int main() { int i;
    int arr[100];
    int SIZE, size = 0;
    int choice, position, value;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array created successfully.\n");
    printf("Array: ");
    for ( i = 0; i < size; i++) {
	printf("%d ", arr[i]);
    }
    do {
	       printf("\n");
	printf("1. Delete element\n");
	printf("2. Reverse array\n");
	printf("3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch (choice) {
	 
	    case 1:
		printf("Enter the position to delete: ");
		scanf("%d", &position);
		deleteElement(arr, &size, position);displayArray(arr, size);
		break;
	    case 2:
		reverseArray(arr, size); displayArray(arr, size);
		break;
	    case 3:
		printf("Exiting...\n");
		break;
	    default:
		printf("Invalid choice. Please enter a valid option.\n");
	}
    } while (choice != 3);
	return 0;
}

