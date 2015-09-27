 /****************************************************************
 * Programmer: Anthony Simmons									 *
 * Class: Cpt S 121, Spring 2011; Lab Section: 6				 *
 * Programming Assignment: #6 Battleship!					  	 *
 * Date: March 26, 2011											 *
 *																 *
 * Description: This program is an one-player console based		 *
 *              remake of the classic board game 'Battleship',   *
 *				where you are player1 and player2 is the CPU.	 *
 *																 *
 *	Warning! If you run this program without finishing the game  *
 *	you must select 'No' to when asked to reload 'Battleship.log'*
 *	failure to do so, will corrupt this file.					 *
 *																 *
 *	Note: For testing purposes, you may want to see the enemy's  *
 *	ships. To do this, see the function 'intitialize_game_board' *
 *	in 'function.c'. There is a line that toggles the visibility *
 *	of the enemy's ships. Leave it commented to keep the ships   *
 *  hidden, or uncomment it to see the enemy's ships.			 *
 ****************************************************************/
#ifndef header_h
#define header_h
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
typedef struct  
	{
		int player_num;
		int hits;
		int misses;
		int shots;
		double accuracy;
		int win;
	} stats;

//Funtion Prototypes: (each function description is in 'function.c')

void welcome_screen(void);

char initialize_game_board(int x1, int y1, int x2, int y2, char board[10][10], int print, int player,
						   int xtarget, int ytarget, int *hits, char visible[10][10], char type);

int select_who_starts_first(void);

int deploy_ships(void);

void manually_place_ships_on_board(int *x1, int *y1, int *x2, int *y2, int size, char board[10][10]);

void randomly_place_ships_on_board(int *x1, int *y1, int *x2, int *y2, int size, char board[10][10]);

void shoot_manual(int *xtarget, int *ytarget, char board[10][10]);

void shoot_random(int *xtarget, int *ytarget, char board[10][10]);

int check_ship(char board[10][10], int *sunkc, int *sunkb, int *sunkr, int *sunks, int *sunkd);

void output_move(FILE *outfile, int xtarget, int ytarget, int player, int hit, int *sunkc, int *sunkb, int *sunkr, int *sunks, int *sunkd);

void output_stats(FILE *outfile, stats player);

#endif