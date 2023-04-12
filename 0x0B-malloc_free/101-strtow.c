#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * helper - helps function
 * @word: wordcount
 * @len: length
 * @str: string to go through
 * @s: array you are assigning
 * Return: char value
 */
char **helper(int word, int len, char *str, char **s)
{
	int i, k, j;

	j = 0;
	for (i = 0; i < word; i++)
	{
		k = 0;
		for (; j < len; j++)
		{
			if (str[0] != ' ' || str[j] != ' ')
			{
				s[i][k] = str[j];
				k++;
			}
			if (j != 0 && str[j] == ' ' && str[j - 1] != ' ')
			{
				j++;
				break;
			}
		}
		s[i][k + 1] = '\0';
	}
	s[word + 1] = NULL;
	return (s);
}
