#include <stdio.h>
/**
 * main - alphabet without e and q
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
