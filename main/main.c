#include <stdio.h>
#include <stdlib.h>
#include "ticlib.h"


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
		print_board(board);

		player_1_turn(board);

		print_board(board);

		check_if_player_1_wins();

		if(game_running == 0)
		{
			continue;

		}; // end of if

		player_2_turn(board);

		print_board(board);

		check_if_player_2_wins();
	}; // end of while loop

	printf("\nGAME OVER\n");
}; // end of main
