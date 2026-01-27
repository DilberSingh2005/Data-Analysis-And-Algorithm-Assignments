#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2,5,8,12,16,23,38,56,72,91};
    int n = 10;
    int target = 23;

    int index = binarySearch(arr, n, target);
    cout << "Element found at index: " << index;
    return 0;
}
