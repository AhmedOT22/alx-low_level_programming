#include "main.h"

/**
 * *rot13 -encodes a string using rot13
 *
 * @s: string to encode
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char code[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == code[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}

	return (s);
}
