#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @s: string to be capitalized
 * Return: address of s
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char s1, s2;
	char sp[] = "\t\n,;.!\?\"(){} ";

	while (str[i] != '\0')
	{
		s1 = *(str + i);
		if (s1 >= 'a' && s1 <= 'z')
		{
			if (i == 0)
				str[i] = s1 - 32;
			else
			{
				s2 = str[i - 1];
				for (j = 0; sp[j] != '\0'; ++j)
				{
					if (s2 == sp[j])
						str[i] = s1 - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
