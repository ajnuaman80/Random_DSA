// Analyze the given integer array nums to determine whether 
// it contains duplicate elements by examining the frequency or occurrence pattern of each value. 
// Return true if at least one element appears more than once; otherwise, return false if all elements are unique. 
// Also prints the frequency of occurrence of each element.

#include <stdio.h>

int main() {
    int n, i, j;
    int hasDuplicate = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    int visited[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        visited[i] = 0;
    }

    printf("\nFrequency of elements:\n");

    for (i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d -> %d\n", nums[i], count);

        if (count > 1)
            hasDuplicate = 1;
    }

    if (hasDuplicate)
        printf("\nOutput: true\n");
    else
        printf("\nOutput: false\n");

    return 0;
}
