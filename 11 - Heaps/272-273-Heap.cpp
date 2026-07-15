#include <bits/stdc++.h>
using namespace std;

struct heap {
public:
    int arr[100];
    int size;

    heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[index], arr[parent]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void deletion() {
        if (size == 0) {
            cout << "nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i <= size) {
            int leftidx = 2 * i;
            int rightidx = 2 * i + 1;
            int largest = i;

            if (leftidx <= size && arr[largest] < arr[leftidx]) {
                largest = leftidx;
            }
            if (rightidx <= size && arr[largest] < arr[rightidx]) {
                largest = rightidx;
            }

            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    
    cout << "Heap elements: ";
    h.print();
    
    h.deletion();
    cout << "After deletion: ";
    h.print();
    return 0;
}
