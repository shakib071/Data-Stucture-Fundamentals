//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int ternarySearch(int arr[], int l, int r, int target) {
    if (r >= l) {
        // Calculate mid1 and mid2
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        // Check if target is present at mid1
        if (arr[mid1] == target) {
            return mid1;
        }

        // Check if target is present at mid2
        if (arr[mid2] == target) {
            return mid2;
        }

        // If target is in the left one-third
        if (target < arr[mid1]) {
            return ternarySearch(arr, l, mid1 - 1, target);
        }

        // If target is in the right one-third
        if (target > arr[mid2]) {
            return ternarySearch(arr, mid2 + 1, r, target);
        }

        // Otherwise, search in the middle one-third
        return ternarySearch(arr, mid1 + 1, mid2 - 1, target);
    }

    // Target is not present in the array
    return -1;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
        int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = ternarySearch(arr, 0, n - 1, target);

    if (result == -1) {
        cout << "Element not found." << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
     
    return 0;

}