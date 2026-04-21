#include <stdio.h>

int main() {
    char key;
    printf("Enter a key: ");
    scanf("%c", &key);

    switch(key) {
        case 'w':
            printf("Up\n");
            break;
        case 's':
            printf("Down\n");
            break;
        case 'a':
            printf("Left\n");
            break;
        case 'd':
            printf("Right\n");
            break;
        default:
            printf("Wrong\n");
    }

    return 0;
}
