using namespace std;


#include <iostream>


int main()
{

	int number;
	int result;
	int beggin;
	int end;
	int choose;

	cout << "Hello User" << endl;

	cout << "Input Beggin Diapazon: ";
	cin >> beggin;
	cout << "Input End Diapazon: ";
	cin >> end;
	cout << "Input Number: ";
	cin >> number;
	
	result = (beggin + end) / 2;

	while (true)
	{
		
		if (result) {

			cout << "Its Your Number: " << result << " " << "(yes = 1, no = 0)" << endl;
			cin >> choose;
			
			if (choose == 0)
			{
				result /= 2;
				cout << "Its Your Number (yes = 1,no = 0): " << result << endl;
				cin >> choose;
			}
		}

		
	}

}
