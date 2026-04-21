#include <stdio.h>

int main() {
    int numGames = 28;
    int results[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1};
    
    // Variable to store the number of wins
    int numWins = 0;

    // Loop to iterate over the array and calculate the number of wins
    for (int i = 0; i < numGames; i++) {
        if (results[i] == 1) {
            numWins++;
        }
    }

    // Output the number of wins
    printf("%d\n", numWins);

    return 0;
}