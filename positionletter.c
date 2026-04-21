#include <stdio.h>
#include <string.h>

int main() {
    char word[50];
    int position;

    // Take string and number as input
    scanf("%s", word);
    scanf("%d", &position);

    // Check if the position is within the valid range
    if (position >= 0 && position < strlen(word)) {
        // Output the letter at the specified position
        printf("%c\n", word[position]);
    } else {
        printf("Invalid position. Please enter a valid index.\n");
    }

    return 0;
}