#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            c++;
        } else if (arr[i] == 0) {
            if (c > max) {
                max = c;
            }
            c = 0;
        }
    }
    
    // Check if the last sequence of 1s is the longest
    if (c > max) {
        max = c;
    }
    
    printf("%d", max);
    return 0;
}
