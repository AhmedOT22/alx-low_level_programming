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
	int i, j, k, length, words;
	char **array;

	words = word_count(str);
	array = (char **) malloc((words + 1) * sizeof(char *));

	if (array == NULL)
		return (NULL);

	for (i = 0, j = 0; i < words; i++)
	{
		while (str[j] == ' ')
			j++;
		length = 0;
		while (str[length + j] != ' ' && str[length + j] != '\0')
			length++;
		array[i] = malloc((length + 1) * sizeof(char));
		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(array[k]);
			free(array);
			return (NULL);
		}
		for (k = 0; k < length; k++)
			array[i][k] = str[j++];
		array[i][k] = '\0';
	}
	array[i] = NULL;
	return (array);
}
