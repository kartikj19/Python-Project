#include <stdio.h>

int main() {
    int mileage, months;

    // Take mileage and months as input
    printf("Enter the mileage: ");
    scanf("%d", &mileage);
    printf("Enter the months: ");
    scanf("%d", &months);

    // Check if it's time to change oil
    if (mileage > 10000 || months > 12) {
        printf("Change Oil\n");
    } else {
        printf("OK\n");
    }

    return 0;
}
