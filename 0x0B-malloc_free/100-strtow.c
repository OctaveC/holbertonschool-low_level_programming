#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: String that will be split
 *
 * Return: A pointer to an arrays of strings
 */
char **strtow(char *str)
{
	char **word_array;
	int words = 0, ite1, ite3, word_length = 0, progress = 0;

	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}

	word_array = malloc((words + 1) * sizeof(char *));
	if (word_array == NULL)
		return (NULL);

	for (ite1 = 0; (ite1 < words); ite1++)
	{

		while (str[progress] == ' ')
			progress++;

		word_length = measure_words(str, progress);

		word_array[ite1] = malloc((word_length + 1) * sizeof(char));
		if (word_array[ite1] == NULL)
		{
			for (ite3 = 0; ite3 < ite1; ite3++)
				free(word_array[ite3]);
			free(word_array);
			return (NULL);
		}
		for (ite3 = 0; ite3 < word_length; ite3++)
		{
			word_array[ite1][ite3] = str[progress];
			progress++;
		}
		word_array[ite1][ite3] = '\0';
	}
	word_array[ite1] = NULL;
	return (word_array);
}



/**
 * count_words - Count the number of words in our string
 * @str: a pointer to a string
 *
 * Return: The number of words in our string
 */
int count_words(char *str)
{
	int ite = 0, words = 0;

	while (str[ite] != '\0')
	{
	if (str[ite] != ' ' && (str[ite + 1] == ' ' || str[ite + 1] == '\0'))
	{
		words++;
	}
	ite++;
	}
	return (words);
}

/**
 * measure_words - Measure the length of a word in our string
 * @str: a pointer to a string
 * @progress: the point of our string where we're at
 *
 * Return: The length of said word in our string
 */
int measure_words(char *str, int progress)
{
	int ite1 = 1;

	while (str[ite1 + progress] != ' ' && str[ite1 + progress] != '\0')
		ite1++;
	return (ite1);
}
