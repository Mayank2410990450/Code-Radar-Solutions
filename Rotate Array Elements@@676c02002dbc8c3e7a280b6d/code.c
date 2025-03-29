#include <stdio.h>

int main() {
    int arr[100], n, k;

    // Input array size
    scanf("%d", &n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input rotation count
    scanf("%d", &k);

    // Handle cases where k >= n
    k = k % n;

    // Print rotated array in one loop without extra array
    for (int i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
