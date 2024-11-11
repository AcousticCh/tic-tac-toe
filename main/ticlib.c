#include <stdio.h>
#include <stdlib.h>

void print_board(char board[3][3])
{
	printf("\n%c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
	printf("---------\n");
	printf("%c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
        printf("---------\n");
	printf("%c | %c | %c\n\n", board[2][0], board[2][1], board[2][2]);
};// end of print board



/* player 1 goes first and holds the X pieces */
void player_1_turn(char board[3][3])
{

	int column_choice;
	int row_choice;
	printf("Player 1's turn\n");
	printf("select your slot by column and row\n");
	printf("Columns and rows start at the top left corner\n");

	printf("\nColumn:  ");
	scanf("%d", &column_choice);

	printf("\nRow:  ");
	scanf("%d", &row_choice);

	// decrement for array indexing
	column_choice--;
	row_choice--;

	// CHECKING IF SELECTIONS ARE IN BOUND
	if(0 > column_choice || 2 < column_choice)
	{
		system("clear");
		printf("selection out of bounds\n");
		player_1_turn(board);
        } else if(0 > row_choice || 2 < row_choice)
        {
                system("clear");
                printf("selection out of bounds\n");
                player_1_turn(board);
	}; //end of if

	// place piece on board
	board[row_choice][column_choice] = 'X';

        system("clear");
};




/* player 2 goes first and holds the O pieces */
void player_2_turn(char board[3][3])
{

        int column_choice;
        int row_choice;
        printf("Player 2's turn\n");
        printf("select your slot by column and row\n");
        printf("Columns and rows start at the top left corner\n");

        printf("\nColumn:  ");
        scanf("%d", &column_choice);

        printf("\nRow:  ");
        scanf("%d", &row_choice);

        // decrement for array indexing
        column_choice--;
        row_choice--;

        // CHECKING IF SELECTIONS ARE IN BOUND
        if(0 > column_choice || 2 < column_choice)
        {
                system("clear");
                printf("selection out of bounds\n");
                player_2_turn(board);
        } else if(0 > row_choice || 2 < row_choice)
        {
                system("clear");
                printf("selection out of bounds\n");
                player_2_turn(board);
        }; //end of if

        // place piece on board
        board[row_choice][column_choice] = 'O';

	system("clear");
};


