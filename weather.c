#include<stdio.h>
int main() {
    float t[] = {10.3, 15.4, 21.8, 22.5, 25.1, 27.4, 28.8, 27.9, 20.1, 22, 19.4, 14.2};
    
    // Take index from input
    int index;
    scanf("%d", &index);

    // Check if the index is within the valid range
    if (index >= 0 && index < 12) {
        // Output the corresponding element
        printf("%f\n", t[index]);
    } else {
        printf("Invalid index. Please enter a number between 0 and 11.\n");
    }

    return 0;
}
