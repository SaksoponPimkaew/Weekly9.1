#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
int main()
{
	int x = 1, y = 1,j=1;
	int count = 0;
	char move[50],ch='a';
	int num16 = 0, num4 = 0, num2 = 0, num8 = 0;
	int number[17];
	printf("Enter X to Exit\n");
	srand(time(NULL));
	for (int i = 1; i <= 16; i++)
	{
		if (rand() % 7 == 6 && num16 == 0)
		{
			num16++;
			number[i] = 16;
		}
		else if (rand() % 7 == 5 && num8 < 2)
		{
			num8++;
			number[i] = 8;
		}
		else if (rand() % 7 <= 4 && num4 < 2)
		{
			num4++;
			number[i] = 4;
		}
		else if (rand() % 7 <= 4 && num2 < 2)
		{
			num2++;
			number[i] = 2;
		}
		else number[i] = 0;

	}

		while (move[1]!= 'X') {
			int k = 0;
			
			for (int i = 1; i <= 16; i++)
			{
				
				x++;
				printf("%d ", number[i]);
				if (x == 5)
				{
					printf("\n");
					x = 1;
					k++;
					if (k==4)
					{
						printf("----------\n");
					}
				}
			}

			scanf_s("%c", &move[1]);
			j++;
			if (j>2)
			{
				scanf_s("%c", &move[1]);
			}

				for (int t = 1; t < strlen(move); t++)
				{
					if (move[1] == 'l' || move[1] == 'L')
					{
						for (int i = 1; i <= 4; i++)
						{
							{
								for (int j = 1; j <= 3; j++)
									if (number[(4 * i) + 1 - j] == number[(4 * i) - j])
									{
										number[(4 * i) - j] = number[(4 * i) - j] * 2;
										number[(4 * i) - j + 1] = 0;
									}
									else if (number[(4 * i) - j] == 0) {
										number[(4 * i) - j] = number[(4 * i + 1) - j];
										number[4 * i + 1 - j] = 0;
									}
							}
						}
					}
					if (move[1] == 'r' || move[1] == 'R')
					{
						for (int i = 1; i <= 4; i++)
						{
							{
								for (int j = 1; j <= 3; j++)
									if (number[j + 4 * (i - 1)] == number[j + 1 + 4 * (i - 1)])
									{
										number[j + 1 + 4 * (i - 1)] = number[j + 4 * (i - 1)] * 2;
										number[j + 4 * (i - 1)] = 0;
									}
									else if (number[j + 1 + 4 * (i - 1)] == 0) {
										number[j + 1 + 4 * (i - 1)] = number[j + 4 * (i - 1)];
										number[j + 4 * (i - 1)] = 0;
									}
							}
						}
					}
					if (move[1] == 'u' || move[1] == 'U')
					{
						for (int i = 1; i <= 4; i++)
						{
							{
								for (int j = 1; j <= 3; j++)
									if (number[13-((j-1)*4)+i-1] == number[13 - ((j - 1) * 4) + i - 1-4])
									{
										number[13 - ((j - 1) * 4) + i - 1 - 4] = number[13 - ((j - 1) * 4) + i - 1] * 2;
										number[13 - ((j - 1) * 4) + i - 1] = 0;
									}
									else if (number[13 - ((j - 1) * 4) + i - 1- 4] == 0) {
										number[13 - ((j - 1) * 4) + i - 1 - 4] = number[13 - ((j - 1) * 4) + i - 1];
										number[13 - ((j - 1) * 4) + i - 1] = 0;
									}
							}
						}
					}
					if (move[1] == 'd' || move[1] == 'D')
					{
						for (int i = 1; i <= 4; i++)
						{
							{
								for (int j = 1; j <= 3; j++)
									if (number[1+((j-1)*4)+i-1] == number[1 + ((j - 1+1) * 4) + i - 1])
									{
										number[1 + ((j - 1 + 1) * 4) + i - 1] = number[1 + ((j - 1) * 4) + i - 1] * 2;
										number[1 + ((j - 1) * 4) + i - 1] = 0;
									}
									else if (number[1 + ((j - 1 + 1) * 4) + i - 1] == 0) {
										number[1 + ((j - 1 + 1) * 4) + i - 1] = number[1 + ((j - 1) * 4) + i - 1];
										number[1 + ((j - 1) * 4) + i - 1] = 0;
									}
							}
						}
					}
				}

				
			}
		
}
