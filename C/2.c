// 
#include <stdio.h>

int main() {
    int digits[] = {9, 2, 3, 9, 9};
    int n = 5;

    // Start from last digit
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            break;
        } else {
            digits[i] = 0;
        }
    }

    // If first digit is 0, all were 9s
    if (digits[0] == 0) {
        int result[n + 1];
        result[0] = 1;
        for (int i = 1; i <= n; i++) {
            result[i] = 0;
        }

        for (int i = 0; i <= n; i++) {
            printf("%d ", result[i]);
        }
    } else {
        for (int i = 0; i < n; i++) {
            printf("%d ", digits[i]);
        }
    }

    return 0;
}
