#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("*");
    }
    printf("\n");

    return 0;
}
