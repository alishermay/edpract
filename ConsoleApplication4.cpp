#include <ctime>
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
struct words
{
	string word;
};
int main()
{
	char varii;
	int var;
	while (cout << "1. Tic-Tac-Toe\n2. Hangman\n3. Quit" << endl)
	{
		system("color 7");
		cin >> varii;
		var = varii - '0'; // so that it doesn't crush
		system("cls");

		if (var == 2)
		{
			system("Title Hangman");

			cout << "Choose the category\n1. Animals\n2. Technologies\n3. Sports\n4. Fruits\n";
			int number = 28;
			words* wordd = new words[number];
			int category;
			cin >> category;
			system("cls");
			wordd[0].word = "rhino";
			wordd[1].word = "cat";
			wordd[2].word = "monkey";
			wordd[3].word = "elephant";
			wordd[4].word = "bear";
			wordd[5].word = "lion";
			wordd[6].word = "giraffe";

			wordd[7].word = "nanotechnology";
			wordd[8].word = "ict";
			wordd[9].word = "communication";
			wordd[10].word = "telecommunication";
			wordd[11].word = "computer";
			wordd[12].word = "programming";
			wordd[13].word = "autopilot";

			wordd[14].word = "football";
			wordd[15].word = "tennis";
			wordd[16].word = "hockey";
			wordd[17].word = "wrestling";
			wordd[18].word = "athletics";
			wordd[19].word = "swimming";
			wordd[20].word = "box";

			wordd[21].word = "apple";
			wordd[22].word = "pineapple";
			wordd[23].word = "banana";
			wordd[24].word = "kiwi";
			wordd[25].word = "pear";
			wordd[26].word = "avocado";
			wordd[27].word = "orange";

			int x;
			srand(time(NULL));
			if (category == 1)
			{
				int range = 6 - 0 + 1;
				x = rand() % range + 0;
			}
			else if (category == 2)
			{
				int range = 13 - 7 + 1;
				x = rand() % range + 7;
			}
			else if (category == 3)
			{
				int range = 20 - 14 + 1;
				x = rand() % range + 14;
			}
			else if (category == 4)
			{
				int range = 27 - 21 + 1;
				x = rand() % range + 21;
			}
			else
			{
				x = rand() % ((6 + 0) + 0);
			}
			int n = 0;
			string answer = wordd[x].word;
			char letter;
			char* res = new char[wordd[x].word.length()];
			for (int i = 0; i < wordd[x].word.length(); i++)
			{
				res[i] = '_';
				cout << res[i] << " ";
			}
			int life = 8;
			cout << '\t' << '\t' << "lifes:" << life << '\n';
			while (life != 0)
			{
				bool r = 0;
				cout << "\n";
				cin >> letter;
				for (int j = 0; j < wordd[x].word.length(); j++)
				{
					if (letter == wordd[x].word[j])
					{
						res[j] = letter;
						wordd[x].word[j] = NULL;
						r = 1;
					}
				}
				if (r == 0)
				{
					life--;
				}
				char letters[1000];
				if (r == 0)
				{
					letters[n] = letter;
					n++;
				}
				system("cls");
				int b = 0;
				for (int i = 0; i < wordd[x].word.length(); i++)
				{
					cout << res[i] << " ";
				}
				cout << '\t' << '\t' << "lifes:" << life << '\n';
				for (int l = 0; l < wordd[x].word.length(); l++)
				{
					if (wordd[x].word[l] != NULL)
					{
						b = 1;
					}
				}
				cout << endl << endl;
				for (int i = 0; i < n; i++)
				{
					cout << letters[i] << " ";
				}
				if (life == 8)
				{
					cout << endl;
				}
				if (life == 7)
				{
					cout << "\n\n\n|\n|\n|\n|\n|\n|\n|\n";
				}
				if (life == 6)
				{
					cout << "\n\n-------------------\n|                |\n|\n|\n|\n|\n|\n|\n";
				}
				if (life == 5)
				{
					cout << "\n\n-------------------\n|                |\n|                O\n|\n|\n|\n|\n|\n";
				}
				if (life == 4)
				{
					cout << "\n\n-------------------\n|                |\n|                O\n|               (_)\n|\n|\n|\n|\n";
				}
				if (life == 3)
				{
					cout << "\n\n-------------------\n|                |\n|                O\n|              -(_)\n|\n|\n|\n|\n";
				}
				if (life == 2)
				{
					cout << "\n\n-------------------\n|                |\n|                O\n|              -(_)-\n|\n|\n|\n|\n";
				}
				if (life == 1)
				{
					cout << "\n\n-------------------\n|                |\n|                O\n|              -(_)-\n|               | \n|\n|\n|\n";
				}
				if (life == 0)
				{
					system("Color 4A");
					cout << "\n\n-------------------\n|                |\n|                O\n|              -(_)-\n|               | |\n|\n|\n|\n";
				}
				if (b == 0)
				{
					system("Color 2");

					cout << endl << "YOU WON!" << endl;
					system("pause");
					system("cls");
					system("Color 0");
					break;
				}
			}
			if (life == 0)
			{
				system("Color 4A");
				cout << endl << "Game Over" << endl << "Answer : " << answer << endl;
				system("pause");
				system("cls");
			}
		}
		else if (var == 1)
		{
			system("Title Tic Tac Toe");
			cout << "1. Computer\n2. With friend\n";
			int varr;
			cin >> varr;
			system("cls");
			if (varr == 1)
			{
				char x[10] = { ' ', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
				int num;
				char n;
				int i = 0, f = 1;
				cout << "-" << x[1] << "-|-" << x[2] << "-|-" << x[3] << "-\n" << "-" << x[4] << "-|-" << x[5] << "-|-" << x[6] << "-\n" << "-" << x[7] << "-|-" << x[8] << "-|-" << x[9] << "-\n";
				int y = 1;
				while (y != 0)
				{
					if (i % 2 == 0)
					{
						cin >> n;
						num = n - '0';
						if (num != 1 && num != 2 && num != 3 && num != 4 && num != 5 && num != 6 && num != 7 && num != 8 && num != 9)
						{

						}
						else if (x[num] != 'X' && x[num] != 'O')
						{
							system("cls");
							x[num] = 'X';
							cout << "-" << x[1] << "-|-" << x[2] << "-|-" << x[3] << "-\n" << "-" << x[4] << "-|-" << x[5] << "-|-" << x[6] << "-\n" << "-" << x[7] << "-|-" << x[8] << "-|-" << x[9] << "-\n";
							if (x[1] == x[2] && x[2] == x[3])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] == x[5] && x[5] == x[9])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[7] == x[8] && x[8] == x[9])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[3] == x[5] && x[5] == x[7])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] == x[4] && x[4] == x[7])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[3] == x[6] && x[6] == x[9])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[2] == x[5] && x[5] == x[8])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[4] == x[5] && x[5] == x[6])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] != '1' && x[2] != '2' && x[3] != '3' && x[4] != '4' && x[5] != '5' && x[6] != '6' && x[7] != '7' << x[8] != '8' && x[9] != '9')
							{
								cout << "DRAW" << endl;
								system("pause");
								system("cls");
								break;
							}
							i++;
						}
						else
						{
							system("cls");
							cout << "-" << x[1] << "-|-" << x[2] << "-|-" << x[3] << "-\n" << "-" << x[4] << "-|-" << x[5] << "-|-" << x[6] << "-\n" << "-" << x[7] << "-|-" << x[8] << "-|-" << x[9] << "-\n";
							cout << "Input the correct number" << endl;
						}
					}
					else if (i % 2 != 0)
					{
						if (x[3] == '3' && x[1] == 'O' && x[2] == 'O')
						{
							num = 3;
						}
						else if (x[2] == '2' && x[1] == 'O' && x[3] == 'O')
						{
							num = 2;
						}
						else if (x[1] == '1' && x[3] == 'O' && x[2] == 'O')
						{
							num = 1;
						}
						else if (x[6] == '6' && x[4] == 'O' && x[5] == 'O')
						{
							num = 6;
						}
						else if (x[5] == '5' && x[4] == 'O' && x[6] == 'O')
						{
							num = 5;
						}
						else if (x[4] == '4' && x[6] == 'O' && x[5] == 'O')
						{
							num = 4;
						}
						else if (x[9] == '9' && x[7] == 'O' && x[8] == 'O')
						{
							num = 9;
						}
						else if (x[8] == '8' && x[7] == 'O' && x[9] == 'O')
						{
							num = 8;
						}
						else if (x[7] == '7' && x[9] == 'O' && x[8] == 'O')
						{
							num = 7;
						}
						else if (x[7] == '7' && x[1] == 'O' && x[4] == 'O')
						{
							num = 7;
						}
						else if (x[4] == '4' && x[1] == 'O' && x[7] == 'O')
						{
							num = 4;
						}
						else if (x[1] == '1' && x[7] == 'O' && x[4] == 'O')
						{
							num = 1;
						}
						else if (x[2] == '2' && x[8] == 'O' && x[5] == 'O')
						{
							num = 2;
						}
						else if (x[5] == '5' && x[8] == 'O' && x[2] == 'O')
						{
							num = 5;
						}
						else if (x[8] == '8' && x[2] == 'O' && x[5] == 'O')
						{
							num = 8;
						}
						else if (x[3] == '3' && x[9] == 'O' && x[6] == 'O')
						{
							num = 3;
						}
						else if (x[6] == '6' && x[9] == 'O' && x[3] == 'O')
						{
							num = 6;
						}
						else if (x[9] == '9' && x[3] == 'O' && x[6] == 'O')
						{
							num = 9;
						}
						else if (x[1] == '1' && x[9] == 'O' && x[5] == 'O')
						{
							num = 1;
						}
						else if (x[5] == '5' && x[9] == 'O' && x[1] == 'O')
						{
							num = 5;
						}
						else if (x[9] == '9' && x[1] == 'O' && x[5] == 'O')
						{
							num = 9;
						}
						else if (x[3] == '3' && x[7] == 'O' && x[5] == 'O')
						{
							num = 3;
						}
						else if (x[5] == '5' && x[7] == 'O' && x[3] == 'O')
						{
							num = 5;
						}
						else if (x[7] == '7' && x[3] == 'O' && x[5] == 'O')
						{
							num = 7;
						}
						else if (x[3] == '3' && x[1] == 'X' && x[2] == 'X')
						{
							num = 3;
						}
						else if (x[2] == '2' && x[1] == 'X' && x[3] == 'X')
						{
							num = 2;
						}
						else if (x[1] == '1' && x[3] == 'X' && x[2] == 'X')
						{
							num = 1;
						}
						else if (x[6] == '6' && x[4] == 'X' && x[5] == 'X')
						{
							num = 6;
						}
						else if (x[5] == '5' && x[4] == 'X' && x[6] == 'X')
						{
							num = 5;
						}
						else if (x[4] == '4' && x[6] == 'X' && x[5] == 'X')
						{
							num = 4;
						}
						else if (x[9] == '9' && x[7] == 'X' && x[8] == 'X')
						{
							num = 9;
						}
						else if (x[8] == '8' && x[7] == 'X' && x[9] == 'X')
						{
							num = 8;
						}
						else if (x[7] == '7' && x[9] == 'X' && x[8] == 'X')
						{
							num = 7;
						}
						else if (x[7] == '7' && x[1] == 'X' && x[4] == 'X')
						{
							num = 7;
						}
						else if (x[4] == '4' && x[1] == 'X' && x[7] == 'X')
						{
							num = 4;
						}
						else if (x[1] == '1' && x[7] == 'X' && x[4] == 'X')
						{
							num = 1;
						}
						else if (x[2] == '2' && x[8] == 'X' && x[5] == 'X')
						{
							num = 2;
						}
						else if (x[5] == '5' && x[8] == 'X' && x[2] == 'X')
						{
							num = 5;
						}
						else if (x[8] == '8' && x[2] == 'X' && x[5] == 'X')
						{
							num = 8;
						}
						else if (x[3] == '3' && x[9] == 'X' && x[6] == 'X')
						{
							num = 3;
						}
						else if (x[6] == '6' && x[9] == 'X' && x[3] == 'X')
						{
							num = 6;
						}
						else if (x[9] == '9' && x[3] == 'X' && x[6] == 'X')
						{
							num = 9;
						}
						else if (x[1] == '1' && x[9] == 'X' && x[5] == 'X')
						{
							num = 1;
						}
						else if (x[5] == '5' && x[9] == 'X' && x[1] == 'X')
						{
							num = 5;
						}
						else if (x[9] == '9' && x[1] == 'X' && x[5] == 'X')
						{
							num = 9;
						}
						else if (x[3] == '3' && x[7] == 'X' && x[5] == 'X')
						{
							num = 3;
						}
						else if (x[5] == '5' && x[7] == 'X' && x[3] == 'X')
						{
							num = 5;
						}
						else if (x[7] == '7' && x[3] == 'X' && x[5] == 'X')
						{
							num = 7;
						}
						else if (x[1] == 'X')
						{
							num = 9;
						}
						else if (f == 1 && x[3] == 'X')
						{
							num = 7;
							f--;
						}
						else if (f == 1 && x[7] == 'X')
						{
							num = 3;
							f--;
						}
						else if (f == 1 && x[9] == 'X')
						{
							num = 1;
							f--;
						}
						else
						{
							while (x[num] == 'X' && x[num] == 'O')

								srand(time(NULL));
							num = 0 + rand() % 9;
						}

						if (x[num] != 'X' && x[num] != 'O')
						{
							system("cls");
							x[num] = 'O';
							cout << "-" << x[1] << "-|-" << x[2] << "-|-" << x[3] << "-\n" << "-" << x[4] << "-|-" << x[5] << "-|-" << x[6] << "-\n" << "-" << x[7] << "-|-" << x[8] << "-|-" << x[9] << "-\n";

							if (x[1] == x[2] && x[2] == x[3])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] == x[5] && x[5] == x[9])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[7] == x[8] && x[8] == x[9])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[2] == x[5] && x[5] == x[8])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[3] == x[5] && x[5] == x[7])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] == x[4] && x[4] == x[7])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[3] == x[6] && x[6] == x[9])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[4] == x[5] && x[5] == x[6])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] != '1' && x[2] != '2' && x[3] != '3' && x[4] != '4' && x[5] != '5' && x[6] != '6' && x[7] != '7' << x[8] != '8' && x[9] != '9')
							{
								cout << "DRAW" << endl;
								system("pause");
								system("cls");
								break;
							}
							i++;
						}
					}
				}
			}
			else if (varr == 2)
			{
				char x[10] = { ' ', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
				int num;
				char n;
				int i = 0;
				cout << "-" << x[1] << "-|-" << x[2] << "-|-" << x[3] << "-\n" << "-" << x[4] << "-|-" << x[5] << "-|-" << x[6] << "-\n" << "-" << x[7] << "-|-" << x[8] << "-|-" << x[9] << "-\n";
				while (cin >> n)
				{
					num = n - '0';
					if (num != 1 && num != 2 && num != 3 && num != 4 && num != 5 && num != 6 && num != 7 && num != 8 && num != 9)
					{

					}
					else if (i % 2 == 0)
					{
						if (x[num] != 'X' && x[num] != 'O')
						{

							system("cls");
							x[num] = 'X';
							cout << "-" << x[1] << "-|-" << x[2] << "-|-" << x[3] << "-\n" << "-" << x[4] << "-|-" << x[5] << "-|-" << x[6] << "-\n" << "-" << x[7] << "-|-" << x[8] << "-|-" << x[9] << "-\n";
							if (x[1] == x[2] && x[2] == x[3])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] == x[5] && x[5] == x[9])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[2] == x[5] && x[5] == x[8])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[7] == x[8] && x[8] == x[9])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[3] == x[5] && x[5] == x[7])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] == x[4] && x[4] == x[7])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[3] == x[6] && x[6] == x[9])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[4] == x[5] && x[5] == x[6])
							{
								cout << "X WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] != '1' && x[2] != '2' && x[3] != '3' && x[4] != '4' && x[5] != '5' && x[6] != '6' && x[7] != '7' << x[8] != '8' && x[9] != '9')
							{
								cout << "DRAW" << endl;
								system("pause");
								system("cls");
								break;
							}
							i++;
						}
						else
						{
							system("cls");
							cout << "-" << x[1] << "-|-" << x[2] << "-|-" << x[3] << "-\n" << "-" << x[4] << "-|-" << x[5] << "-|-" << x[6] << "-\n" << "-" << x[7] << "-|-" << x[8] << "-|-" << x[9] << "-\n";
							cout << "Input the correct number" << endl;
						}
					}
					else if (i % 2 != 0)
					{
						if (x[num] != 'X' && x[num] != 'O')
						{

							system("cls");
							x[num] = 'O';
							cout << "-" << x[1] << "-|-" << x[2] << "-|-" << x[3] << "-\n" << "-" << x[4] << "-|-" << x[5] << "-|-" << x[6] << "-\n" << "-" << x[7] << "-|-" << x[8] << "-|-" << x[9] << "-\n";
							if (x[1] == x[2] && x[2] == x[3])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] == x[5] && x[5] == x[9])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[7] == x[8] && x[8] == x[9])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[2] == x[5] && x[5] == x[8])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[3] == x[5] && x[5] == x[7])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] == x[4] && x[4] == x[7])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[3] == x[6] && x[6] == x[9])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[4] == x[5] && x[5] == x[6])
							{
								cout << "O WON" << endl;
								system("pause");
								system("cls");
								break;
							}
							else if (x[1] != '1' && x[2] != '2' && x[3] != '3' && x[4] != '4' && x[5] != '5' && x[6] != '6' && x[7] != '7' << x[8] != '8' && x[9] != '9')
							{
								cout << "DRAW" << endl;
								system("pause");
								system("cls");
								break;
							}
							i++;
						}
						else
						{
							system("cls");
							cout << "-" << x[1] << "-|-" << x[2] << "-|-" << x[3] << "-\n" << "-" << x[4] << "-|-" << x[5] << "-|-" << x[6] << "-\n" << "-" << x[7] << "-|-" << x[8] << "-|-" << x[9] << "-\n";
							cout << "Input the correct number" << endl;
						}
					}
				}
			}
			else
			{
				break;
			}

		}
		else if (var == 3)
		{
			return 0;
		}
		else
		{
			cout << "Incorrect" << endl;
			system("pause");
			system("cls");
		}
	}
}


