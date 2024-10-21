#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int l, int r, int target) {
    while (l <= r) {
        int mid = l + (r - l) / 2;  // To avoid overflow

        // Check if the target is at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target is smaller, ignore the right half
        if (arr[mid] > target) {
            r = mid - 1;
        }
        // If target is larger, ignore the left half
        else {
            l = mid + 1;
        }
    }

    return -1;  // Target not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1) {
        cout << "Element not found." << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}
