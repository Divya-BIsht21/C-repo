#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) {
        return mid;
    }
    if (arr[mid] < key) {
        return binarySearchRecursive(arr, mid + 1, high, key);
    } else {
        return binarySearchRecursive(arr, low, mid - 1, key);
    }
}

int main() {
    int arr[] = {2, 5, 7, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    int index = binarySearchRecursive(arr, 0, n - 1, key);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0;
}

