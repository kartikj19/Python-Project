#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    // Output the numbers in the given range
    for (int i = start; i <= end; ++i) {
        printf("%d ", i);
    }

    return 0;
}
