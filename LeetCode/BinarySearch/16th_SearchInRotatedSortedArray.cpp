#include <vector>
using namespace std;

int getPivot(vector<int>& arr, int n) {
    int s = 0;
    int end = n - 1;
    int mid;
    while (s < end) {
        mid = s + (end - s) / 2;
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            end = mid;
        }
    }
    return s;
}

int binSearch(vector<int>& arr, int s, int e, int key) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            return mid; // Return the index of the found element
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k) {
    // Handle the edge case where the array has only one element
    if (n == 1) {
        return arr[0] == k ? 0 : -1;
    }

    int pivot = getPivot(arr, n);

    // Check which subarray to search in
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binSearch(arr, pivot, n - 1, k);
    } else {
        return binSearch(arr, 0, pivot - 1, k);
    }
}
