#include <stdio.h>

int main() {

    int arr[100], n;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = second = arr[0];

    for (int i = 1; i < n; i++) {

        // New largest found
        if (arr[i] > largest) {

            second = largest;
            largest = arr[i];
        }

        // Update second largest
        else if (arr[i] > second && arr[i] != largest) {

            second = arr[i];
        }
    }

    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", second);

    return 0;
}
