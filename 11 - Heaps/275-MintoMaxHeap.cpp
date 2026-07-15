#include <bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left]) {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, n, largest);
    }
}

void convertMinToMaxHeap(int arr[], int n) {
    // Process internal nodes from bottom up
    for (int i = n / 2; i > 0; i--) {
        maxHeapify(arr, n, i);
    }
}

int main() {
    // 1-indexed array representing a min heap
    int arr[] = {-1, 3, 5, 9, 6, 8, 20, 10};
    int n = 7;

    convertMinToMaxHeap(arr, n);

    cout << "Converted Max Heap: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
