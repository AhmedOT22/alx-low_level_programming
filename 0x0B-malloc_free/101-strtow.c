#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * word_count - count the number of words in a string
 *
 * @str: string
 *
 * Return: number of words
 */

int word_count(char *str)
{
	int i, count;
	int flag;

	count = 0;
	flag = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
	}

	return (count);
}

/**
 * strtow - splits a string into words
 *
 * @str: string of char
 *
 * Return: pointer to array of strings if success, NULL if fail
 */

char **strtow(char *str)
{
	int i, j = 0, c = 0, length = 0, words, start, end;
	char **array, *tmp;

	while (*(str + length))
		length++;

	words = word_count(str);
	if (words == 0)
		return (NULL);

	array = (char **) malloc((words + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				array[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	array[j] = NULL;
	return (array);
}
