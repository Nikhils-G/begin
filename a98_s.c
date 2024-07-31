#include <stdio.h>

// Function to find and print the winning move for Player B
void find_winning_move(const char* moveA) {
    if (moveA[0] == 'r' && moveA[1] == 'o' && moveA[2] == 'c' && moveA[3] == 'k' && moveA[4] == '\0') {
        printf("paper\n");
    } else if (moveA[0] == 'p' && moveA[1] == 'a' && moveA[2] == 'p' && moveA[3] == 'e' && moveA[4] == 'r' && moveA[5] == '\0') {
        printf("scissors\n");
    } else if (moveA[0] == 's' && moveA[1] == 'c' && moveA[2] == 'i' && moveA[3] == 's' && moveA[4] == 's' && moveA[5] == 'o' && moveA[6] == 'r' && moveA[7] == 's' && moveA[8] == '\0') {
        printf("rock\n");
    } else {
        printf("Invalid move\n");
    }
}

int main() {
    char moveA[10];

    // Input from user
    printf("Enter the move for Player A (rock, paper, scissors): ");
    scanf("%s", moveA);

    // Find and print the winning move for Player B
    find_winning_move(moveA);

    return 0;
}
