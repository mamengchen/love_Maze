#include"Maze.h"

int main() {
	DateType maze[N][M];
	Block in, out;
	initMaze(maze, in, out);
	findPath(maze, in, out);
	return 0;
}
