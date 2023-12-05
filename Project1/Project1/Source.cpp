#include <iostream>
#include <conio.h>

#pragma warning(disable:4996) // POSIX name deprecated

void run();
void printMap();
void initMap();
void move(int dx, int dy);
void update();
void changeDirection(char key);
void clearScreen();
void generateFood();


// Returns graphical character for display from map value
char getMapValue(int value)
{
	// Returns a part of snake body
	if (value > 0)
		return 'o';

	switch (value) {
		// Return wall
	case -1:
		return 'X';
		// Return food
	case -2:
		return 'O';
	}

	return ' ';
}

// Map dimensions
const int mapwidth = 20;
const int mapheight = 20;

const int size = mapwidth * mapheight;

// The tile values for the map
int map[size];

// Snake head details
int headxpos;
int headypos;
int direction;

// Amount of food the snake has (How long the body is)
int food = 2;

// Determine if game is running
bool running;

using namespace std;

// Initializes map
void initMap()
{
	// Places the initual head location in middle of map
	headxpos = mapwidth / 2;
	headypos = mapheight / 2;
	map[headxpos + headypos * mapwidth] = 1;

	// Places top and bottom walls
	for (int x = 0; x < mapwidth; ++x) {
		map[x] = -1;
		map[x + (mapheight - 1) * mapwidth] = -1;
	}

	// Places left and right walls
	for (int y = 0; y < mapheight; y++) {
		map[0 + y * mapwidth] = -1;
		map[(mapwidth - 1) + y * mapwidth] = -1;
	}

	// Generates first food
	generateFood();
}


void run() {
	initMap();
	running = true;
	while (running) {
		// If a key is pressed
		if (kbhit()) {
			// Change to direction determined by key pressed
			changeDirection(getch());
		}
		// Upate the map
		update();

		// Clear the screen
		clearScreen();

		// Print the map
		printMap();

		// wait 0.5 seconds
		_sleep(500);
	}

	// Print out game over text
	std::cout << "\t\t!!!Game over!" << std::endl << "\t\tYour score is: " << food;

	// Stop console from closing instantly
	std::cin.ignore();
}

int main() {

	run;
}
