// Heap Sort
#include <iostream>
using namespace std;
int main() {
    int arr[] = {30, 10, 50, 20, 60, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        int root = i;
        while (true) {
            int largest = root;
            int left = 2 * root + 1;
            int right = 2 * root + 2;
      if (left < n && arr[left] > arr[largest]) largest = left;
   if (right < n && arr[right] > arr[largest]) largest = right;
            if (largest == root) break;
            swap(arr[root], arr[largest]);
            root = largest;
        }
    }
    // Heap sort
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        int root = 0;
        int heapSize = i;
        while (true) {
            int largest = root;
            int left = 2 * root + 1;
            int right = 2 * root + 2;
 if (left < heapSize && arr[left] > arr[largest]) largest = left;
 if(right<heapSize && arr[right]>arr[largest])largest = right;
            if (largest == root) break;
            swap(arr[root], arr[largest]);
            root = largest;
        }
    }
    // Print sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
