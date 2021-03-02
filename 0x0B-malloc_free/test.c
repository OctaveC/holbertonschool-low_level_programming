#include <stdio.h>
/**
 * _strlen - Return the length of a string
 * @s: a pointer
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int n;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

int main(void)
{
	printf("%d", _strlen("truc"));
	return (0);
}
