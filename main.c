#include <stdio.h>

int linearSearch (int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == i) {
            return i;
        }
    }

    return -1;
}

int main(void) {
    //  Find a Fixed Point (Value equal to index) in a given array
    int arr[] = {-10, -5, 0, 3, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Fixed Point is %d", linearSearch(arr, n));
    //getchar(); output will be displayed until the program is stopped.
    return 0;
}
