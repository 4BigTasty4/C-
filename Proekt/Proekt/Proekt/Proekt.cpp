//#include <iostream>
//#include <windows.h>
//#include <conio.h>
//
//void MainFunc();
//
//using namespace std;
//
//int fruitX;
//int fruitY;
//int tailX[100];
//int tailY[100];
//int nTail;
//int prev2X;
//int prev2Y;
//
//const int height = 20;
//const int width = 20;
//
//enum DIRECTION {
//
//	UP = 72,
//	DOWN = 80,
//	LEFT = 75,
//	RIGHT = 77
//
//};
//
//DIRECTION dir;
//
//enum CellStatus {
//
//	FruitCell = 1,
//
//	BigFruitCell = 2,
//
//	SnakeCell = 3
//
//};
//
//enum theEdges {
//
//	upperEdge,
//
//	bottomEdge,
//
//	sides
//
//};
//
//char FieldState(int cellState)
//{
//	switch (cellState) {
//	case CellStatus::FruitCell:
//		return 'o';
//		break;
//	case CellStatus::BigFruitCell:
//		return 'O';
//		break;
//	case CellStatus::SnakeCell:
//		return 'X';
//		break;
//	case 0:
//		return (char)219;
//		break;
//
//	}
//	return 0;
//}
//
//void Rand() {
//
//	srand(time(0));
//
//	x = height - 2;
//	y = width - 2;
//
//	fruitX = rand() % height;
//	fruitY = rand() % width;
//
//}
//
//void Drow() {
//
//	int field[height][width] = {};
//
//	for (int x = 0; x < height; x++)
//	{
//		for (int y = 0; y < width; y++)
//		{
//			cout << FieldState(field[x][y]) << ' ';
//		}
//		cout << endl;
//	}
//
//}
//
//void Input() {
//
//
//		switch (_getch())
//		{
//		case 75:
//			dir = LEFT;
//			break;
//		case 77:
//			dir = RIGHT;
//			break;
//		case 72:
//			dir = UP;
//			break;
//		case 80:
//			dir = DOWN;
//			break;
//		case 'x':
//			gameStatus = true;
//			break;
//		}
//	
//}
//
//void Logic() {
//
//	int prevX = tailX[0];
//
//	int prevY = tailY[0];
//
//	tailX[0] = x;
//	tailY[0] = y;
//
//	for (int i = 1; i < nTail; i++)
//	{
//		prev2X = tailX[i];
//		prev2Y = tailY[i];
//		tailX[i] = prevX;
//		tailY[i] = prevY;
//		prevX = prev2X;
//		prevY = prev2Y;
//	}
//
//	switch (dir)
//	{
//	case UP:
//		y--;
//		break;
//	case DOWN:
//		y++;
//		break;
//	case LEFT:
//		x--;
//		break;
//	case RIGHT:
//		x++;
//		break;
//	}
//
//	if (x > width || x < 0 || y > height || y < 0)
//	{
//		gameStatus = true;
//	}
//
//	for (int i = 0; i < nTail; i++)
//	{
//		if (tailX[i] == x && tailY[i] == y) {
//
//			gameStatus = true;
//
//		}
//	}
//
//	if (x == fruitX && y == fruitY) 
//	{
//		score += 10;
//
//		fruitX = rand() % height;
//		fruitY = rand() % width;
//
//		nTail++;
//
//	}
//
//}
//
//void main() {
//
//	MainFunc();
//
//}
//
//void MainFunc() {
//
//	bool gameStatus = true;
//
//	int score = 0;
//
//
//	Rand();
//
//	while (gameStatus) {
//
//		system("cls");
//		Drow();
//
//		Input();
//		Logic();
//
//	}
//
//}