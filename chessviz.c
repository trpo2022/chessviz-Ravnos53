#include <stdio.h>

void printDesk(char chessDesk[8][8]);

int main() {
    // initializing the chessboard
    char chessDesk[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
			     {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
			     {32, 32, 32, 32, 32, 32, 32, 32},
			     {32, 32, 32, 32, 32, 32, 32, 32},
			     {32, 32, 32, 32, 32, 32, 32, 32},
			     {32, 32, 32, 32, 32, 32, 32, 32},
			     {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
			     {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    printDesk(chessDesk);

    return 0;
}

void printDesk(char chessDesk[8][8]) {
    // printing the chessboard
    int i, j;
    for ( i = 0; i < 8; i++) {
        printf("%d ", 8 - i);
	for ( j = 0; j < 8; j++) {
	    printf("%c ", chessDesk[i][j]);
	}
	printf("\n");
    }
    printf("  a b c d e f g h\n");
}
