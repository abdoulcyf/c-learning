#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	char	str[40];
	char	ch;
	int	i;

	i = 0;
	strcpy(str, "I am 25 and a string");
	while ((ch = str[i]) != '\0')  
	{
		if isdigit(ch)
			putchar('_');
		else
			putchar(ch);
		i++;
	}
	putchar('\n');
	return (0);
}
