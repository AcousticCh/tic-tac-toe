#include <stdio.h>
#include <stdlib.h>

// CREATE GAME LOOP
// BUILD CHECKING FUNCTION FOR GAME OVER
// FIX SCREEN CLEARING



int game_running = 1;


char board[3][3] =
	{
	{' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
	};


void print_board()
{
	printf("\n%c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
	printf("---------\n");
	printf("%c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
        printf("---------\n");
	printf("%c | %c | %c\n\n", board[2][0], board[2][1], board[2][2]);
};// end of print board

/* player 1 goes first and holds the X pieces */
void player_1_turn()
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
		player_1_turn();
        } else if(0 > row_choice || 2 < row_choice)
        {
                system("clear");
                printf("selection out of bounds\n");
                player_1_turn();
	}; //end of if

	// place piece on board
	board[row_choice][column_choice] = 'X';

        system("clear");
};


/* player 2 goes first and holds the O pieces */
void player_2_turn()
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
                player_1_turn();
        } else if(0 > row_choice || 2 < row_choice)
        {
                system("clear");
                printf("selection out of bounds\n");
                player_2_turn();
        }; //end of if

        // place piece on board
        board[row_choice][column_choice] = 'O';

	system("clear");
};


void check_if_player_1_wins()
{
	// left to right 3 in a row check
	if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
	{
		game_running = 0;
		printf("Player 1 wins\n");

	} else if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
	{
                game_running = 0;
		printf("Player 1 wins\n");

	} else if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
        {
                game_running = 0;
		printf("Player 1 wins\n");

	// top to bottom 3 in a row check
	} else if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
	{
                game_running = 0;
		printf("Player 1 wins\n");

	} else if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
        {
                game_running = 0;
                printf("Player 1 wins\n");

        } else if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
        {
                game_running = 0;
                printf("Player 1 wins\n");

	// diagonal 3 in a row check
	} else if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
        {
                game_running = 0;
                printf("Player 1 wins\n");


	} else if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
        {
                game_running = 0;
                printf("Player 1 wins\n");

	}; // end of if
};// end of check for winner


void check_if_player_2_wins()
{
        // left to right 3 in a row check
        if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
        {
                game_running = 0;
                printf("Player 2 wins\n");

        } else if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
        {
                game_running = 0;
                printf("Player 2 wins\n");

        } else if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
        {
                game_running = 0;
                printf("Player 2 wins\n");

        // top to bottom 3 in a row check
        } else if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
        {
                game_running = 0;
                printf("Player 2 wins\n");

        } else if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
        {
                game_running = 0;
                printf("Player 2 wins\n");

        } else if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
        {
                game_running = 0;
                printf("Player 2 wins\n");

        // diagonal 3 in a row check
        } else if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
        {
                game_running = 0;
                printf("Player 2 wins\n");

        } else if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
        {
                game_running = 0;
                printf("Player 2 wins\n");

        }; // end of if
};// end of check if player 2 wins



int main()
{
	while(game_running)
	{
		system("clear");
		print_board();

		player_1_turn();

		print_board();

		check_if_player_1_wins();

		if(game_running == 0)
		{
			continue;

		}; // end of if

		player_2_turn();

		print_board();

		check_if_player_2_wins();
	}; // end of while loop

	printf("\nGAME OVER\n");
}; // end of main
