#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define RANK 9
#define ROWS ROW+2
#define RANKS ROW+2

void menu();
void game();
void InitBoard(char board[ROWS][RANKS], int row, int rank, char ch);
void display_board(char board[ROWS][RANKS], int row, int rank);
void set_my_mine(char board[ROWS][RANKS], int x, int y);
void Find_Mine(char mine[ROWS][RANKS], char show[ROWS][RANKS], int row, int rank);
int get_my_mine(char mine[ROWS][RANKS], int x, int y);