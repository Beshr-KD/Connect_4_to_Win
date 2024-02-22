#include <iostream>
using namespace std;
char A[6][7];
int s, sum=0;
void printA()
{
	system("clear");
	cout << "|| 0 || 1 || 2 || 3 || 4 || 5 || 6 ||" << endl
		<< "-------------------------------------" << endl
		<< "|| ";
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
			cout << A[i][j] << " || ";
		cout << endl;
		if (i < 5)
			cout << "|| ";
	}
	cout << endl;
}
void cin1()
{
	int n;
	cout << "P1 : Enter the item's order : ";
	cin >> n;
	if (n >= 0 && n < 7)
	{
		for (int i = 5; i >= 0; i--)
			if (A[i][n] == ' ')
			{
				A[i][n] = 'x';
				break;
			}
		printA();
	}
}
void cin2()
{
	int n;
	cout << "P2 : Enter the item's order : ";
	cin >> n;
	if (n >= 0 && n < 7)
	{
		for (int i = 5; i >= 0; i--)
			if (A[i][n] == ' ')
			{
				A[i][n] = 'o';
				break;
			}
		printA();
	}
}
void If()
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
			if (j < 4 && A[i][j] == 'x' && A[i][j + 1] == 'x' && A[i][j + 2] == 'x' && A[i][j + 3] == 'x')
			{
				cout <<" P1 is the winner ." << endl;
				sum++;
				break;
			}
			else if (j < 4 && A[i][j] == 'o' && A[i][j + 1] == 'o' && A[i][j + 2] == 'o' && A[i][j + 3] == 'o')
			{
				cout <<" P2 is the winner ." << endl;
				sum++;
				break;
			}
			else if (i < 3 && A[i][j] == 'x' && A[i + 1][j] == 'x' && A[i + 2][j] == 'x' && A[i + 3][j] == 'x')
			{
				cout <<" P1 is the winner ." << endl;
				sum++;
				break;
			}
			else if (i < 3 && A[i][j] == 'o' && A[i + 1][j] == 'o' && A[i + 2][j] == 'o' && A[i + 3][j] == 'o')
			{
				cout <<" P2 is the winner ." << endl;
				sum++;
				break;
			}
			else if (i < 3 && j < 4 && A[i][j] == 'x' && A[i + 1][j + 1] == 'x' && A[i + 2][j + 2] == 'x' && A[i + 3][j + 3] == 'x')
			{
				cout <<" P1 is the winner ." << endl;
				sum++;
				break;
			}
			else if (i < 3 && j < 4 && A[i][j] == 'o' && A[i + 1][j + 1] == 'o' && A[i + 2][j + 2] == 'o' && A[i + 3][j + 3] == 'o')
			{
				cout <<" P2 is the winner ." << endl;
				sum++;
				break;
			}
			else if (i < 3 && j > 2 && A[i][j] == 'x' && A[i + 1][j - 1] == 'x' && A[i + 2][j - 2] == 'x' && A[i + 3][j - 3] == 'x')
			{
				cout <<" P1 is the winner ." << endl;
				sum++;
				break;
			}
			else if (i < 3 && j > 2 && A[i][j] == 'o' && A[i + 1][j - 1] == 'o' && A[i + 2][j - 2] == 'o' && A[i + 3][j - 3] == 'o')
			{
				cout <<" P2 is the winner ." << endl;
				sum++;
				break;
			}
		if (sum == 1)
				break;
	}
}

int main()
{
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 7; j++)
			A[i][j] = ' ';
	cout << "    ~~~ Welcome to the CONNECT 4 TO WIN game ~~~" << endl;
	cout << " press ( 1 ) to start the game : ";
	cin >> s;
	if (s == 1)
	{
		printA();
		for (int i = 0; i < 42; i++)
		{
					cin1();
					If();
					if (sum==1)
						break;
					cin2();
					If();
					if (sum==1)
						break;
		}
		if (sum==0)
			cout << " There is no winner ." << endl;
	}

	return 0;
}

