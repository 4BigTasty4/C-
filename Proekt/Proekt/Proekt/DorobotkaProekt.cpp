#include <iostream>
#include <conio.h>

void MainFunc();

char getMapValue(int value);

void move(int dx, int dy);

using namespace std;

bool gameStatus = true;

int fruitX;
int fruitY;

int xPram;
int yPram;

const int height = 20;
const int width = 20;

int map[height*width];

int headxpos;
int headypos;
int direction;

int food = 1;

bool running;


enum DIRECTION {

	UP = 72,
	DOWN = 80,
	LEFT = 75,
	RIGHT = 77

};

DIRECTION dir;

enum CellStatus {

	FruitCell = 1,

	BigFruitCell = 2,

	SnakeCell = 3

};

enum theEdges {

	upperEdge,

	bottomEdge,

	sides

};


char getMapValue(int value)
{
	if (value > 0)
		return 'o';

	switch (value) {
	case -1:
		return 'X';
	case -2:
		return 'O';
	}

	return ' ';
}


void Rand() {

	srand(time(0));

	xPram = height / 2;
	yPram = width / 2;

	
	

}


void initMap()
{
	for (int x = 0; x < width; ++x) {
		map[x] = -1;
		map[x + (height - 1) * width] = -1;
	}

	for (int y = 0; y < height; y++) {
		map[y * width] = -1;
		map[(width - 1) + y * width] = -1;
	}

}


void printMap()
{
	for (int x = 0; x < height; ++x) {
		for (int y = 0; y < width; ++y) {
			cout << getMapValue(map[x + y * width]);
			
			if (x == yPram && y == xPram)
			{
				cout << "o";
			}
			else if(x == fruitY && y == fruitX) 
			{
				cout << "O";
			}
			else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}
}
void Input() {


		switch (_getch())
		{
		case 75:
			dir = LEFT;
			break;
		case 77:
			dir = RIGHT;
			break;
		case 72:
			dir = UP;
			break;
		case 80:
			dir = DOWN;
			break;
		case 'x':
			gameStatus = true;
			break;
		}
	
}

void Logic() {

	int score = 0;

	int nTail = 0;

	int prev2X;
	int prev2Y;

	int tailX[100];
	int tailY[100];

	int prevX = tailX[0];

	int prevY = tailY[0];

	tailX[0] = xPram;
	tailY[0] = yPram;

	for (int i = 1; i < nTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}

	switch (dir)
	{
	case UP:
		yPram--;
		break;
	case DOWN:
		yPram++;
		break;
	case LEFT:
		xPram--;
		break;
	case RIGHT:
		xPram++;
		break;
	}

	if (xPram > width || xPram < 0 || yPram > height || yPram < 0)
	{
		gameStatus = true;
	}

	//for (int i = 0; i < nTail; i++)
	//{
	//	if (tailX[i] == xPram && tailY[i] == yPram) {
	//
	//		gameStatus = true;
	//
	//	}
	//}
	do {
		fruitX = rand() % height;
		fruitY = rand() % width;
		nTail++;
		score += 10;

	} while (xPram == fruitX && yPram == fruitY);


}


	
void move(int dx, int dy) {
		
	int newx = headxpos + dx;
	int newy = headypos + dy;

	
	if (map[newx + newy * width] == -2) {
		food++;
	}
	
	else if (map[newx + newy * width] != 0) {
		running = false;
	}

	
	headxpos = newx;
	headypos = newy;
	map[headxpos + headypos * width] = food;

	
	int x = 0;
	int y = 0;
	
	

	map[x + y * width] = -2;	
	
	headxpos = width / 2;
	headypos = height / 2;
	map[headxpos + headypos * width] = 1;

}

void update() {
	switch (direction) {
	case 0: move(-1, 0);
		break;
	case 1: move(0, 1);
		break;
	case 2: move(1, 0);
		break;
	case 3: move(0, -1);
		break;
	}

	
	//for (int i = 0; i < width * height; i++) {
	//	if (map[i] > 0) map[i]--;
	//}
}

void main() {

	MainFunc();

}

void MainFunc() {

	int value = 1;

	Rand();

	initMap();

	while (gameStatus) {

		system("cls");
		printMap();
		getMapValue(value);
		update();
		Input();
		Logic();

	}

}

