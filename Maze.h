#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>

#define MAXQSIZE 1000
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10

#define N 37
#define M 47
#define DELAY 1
typedef enum {
	MASK = 0,
	ROAD = 1,
	BACK = 2,
	INWALL = 3,
	OUTWALL = 4,
	EMPTYWALL = 5
}BlockType;
typedef enum {
	EAST = 6,
	SOUTH = 7,
	WEST = 8,
	NORTH = 9
}Direction;
typedef int DateType;

bool visited[N][M];
bool mask[N][M];
bool area[N][M];
int di[4][2] = {
	{0,1},{1,0},{0,-1},{-1,0}
};
typedef struct {
	int x;
	int y;
	int di;
}Block;

typedef struct {
	Block *base;
	int front;
	int rear;
}SqQueue;

typedef struct {
	Block *base;
	Block *top;
	int rear;
}SqStack;


void initMaze(DateType maze[N][M], Block &in, Block &out);//≥ı ºªØ√‘π¨
void findPath(DateType maze[N][M], Block in, Block out);
void initBlock(Block &block, int x, int y, int di);
void showBlock(DateType maze[N][M]);
void updateMaze(DateType maze[N][M]);
int nextBlockX(int a, int di);
int nextBlockY(int b, int di);
bool inMaze(int x, int y);
void clearMask(int x, int y);
void gotoxy(int x, int y);
void hideCursor();
void initHeart();

