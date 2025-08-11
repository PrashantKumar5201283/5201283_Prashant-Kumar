#include <iostream>
#include <algorithm> 

using namespace std;

int findMedian(int arr_count, int* arr) {
    sort(arr, arr + arr_count);

    int middle = arr_count / 2;
    if (arr_count % 2 == 0) {
        return (arr[middle - 1] + arr[middle]) / 2;
    } else {
        return arr[middle];
    }
}

int main() {
    int arr[] = {4, 2, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Median: " << findMedian(n, arr) << endl;
}
