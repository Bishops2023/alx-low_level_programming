#include <stdio.h>
/**
 * main - print alphabet in lower and higher case
 * Return: always 0
 */
int main(void)
{
char uc;
for (uc = 'a'; uc <= 'z'; uc++)
	putchar(uc);

for (uc = 'A'; uc <= 'Z'; uc++)
	putchar(uc);

	putchar('\n');
	return (0);
}
