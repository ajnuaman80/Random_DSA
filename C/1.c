// You are given a large integer represented as a integer array digits, where each digits[i] is the ith digit of the integer. 
// The digits are ordered from most significant to least significant in left to right order. The large integer doesn't contain any loading 0's. 
// Increment the large integer by one and return the array of digits.

#include <stdio.h>
int main() {
    int n, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int d[n];

    printf("Enter elements of the array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &d[i]);
    }

    for(j = n - 1; j >= 0; j--) {
        if(d[j] < 9) {
            d[j]++;
            break;
        } else {
            d[j] = 0;
        }
    }

    if(d[0] == 0) {
        int e[n+1];
        e[0] = 1;
        for(j=1; j <= n; j++) {
            e[j] = 0;
        }
        for(j=0; j<=n; j++) {
            printf("%d", e[j]);
        }
    } else {
        for(j = 0; j < n; j++) {
            printf("%d", d[j]);
        }
    }
    return 0;
}
