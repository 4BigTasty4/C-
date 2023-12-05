//#include <iostream>
//#include <windows.h>
//#include <conio.h>
//
//void mainfunc();
//
//using namespace std;
//
//int x;
//int y;
//int fruitx;
//int fruity;
//int tailx[100];
//int taily[100];
//int ntail;
//int prev2x;
//int prev2y;
//
//const int height = 20;
//const int width = 20;
//
//enum direction {
//
//	up = 72,
//	down = 80,
//	left = 75,
//	right = 77
//
//};
//
//direction dir;
//
//enum cellstatus {
//
//	fruitcell = 1,
//
//	bigfruitcell = 2,
//
//	snakecell = 3
//
//};
//
//enum theedges {
//
//	upperedge,
//
//	bottomedge,
//
//	sides
//
//};
//
//char fieldstate(int cellstate)
//{
//	switch (cellstate) {
//	case cellstatus::fruitcell:
//		return 'o';
//		break;
//	case cellstatus::bigfruitcell:
//		return 'o';
//		break;
//	case cellstatus::snakecell:
//		return 'x';
//		break;
//	case 0:
//		return (char)219;
//		break;
//
//	}
//	return 0;
//}
//
//void rand() {
//
//	srand(time(0));
//
//	x = height - 2;
//	y = width - 2;
//
//	fruitx = rand() % height;
//	fruity = rand() % width;
//
//}
//
//void drow() {
//
//	int field[height][width] = {};
//
//	for (int x = 0; x < height; x++)
//	{
//		for (int y = 0; y < width; y++)
//		{
//			cout << fieldstate(field[x][y]) << ' ';
//		}
//		cout << endl;
//	}
//
//}
//
//void input() {
//
//
//		switch (_getch())
//		{
//		case 75:
//			dir = left;
//			break;
//		case 77:
//			dir = right;
//			break;
//		case 72:
//			dir = up;
//			break;
//		case 80:
//			dir = down;
//			break;
//		}
//	
//}
//
//void logic() {
//
//	int prevx = tailx[0];
//
//	int prevy = taily[0];
//
//	tailx[0] = x;
//	taily[0] = y;
//
//	for (int i = 1; i < ntail; i++)
//	{
//		prev2x = tailx[i];
//		prev2y = taily[i];
//		tailx[i] = prevx;
//		taily[i] = prevy;
//		prevx = prev2x;
//		prevy = prev2y;
//	}
//
//	switch (dir)
//	{
//	case up:
//		y--;
//		break;
//	case down:
//		y++;
//		break;
//	case left:
//		x--;
//		break;
//	case right:
//		x++;
//		break;
//	}
//
//	if (x > width || x < 0 || y > height || y < 0)
//	{
//		gamestatus = true;
//	}
//
//	for (int i = 0; i < ntail; i++)
//	{
//		if (tailx[i] == x && taily[i] == y) {
//
//			gamestatus = true;
//
//		}
//	}
//
//	if (x == fruitx && y == fruity) 
//	{
//		score += 10;
//
//		fruitx = rand() % height;
//		fruity = rand() % width;
//
//		ntail++;
//
//	}
//
//}
//
//void main() {
//
//	mainfunc();
//
//}
//
//void mainfunc() {
//
//	bool gamestatus = true;
//
//	int score = 0;
//
//
//	rand();
//
//	while (gamestatus) {
//
//		system("cls");
//		drow();
//
//		input();
//		logic();
//
//	}
//
//}