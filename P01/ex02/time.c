#include <stdio.h>
#include <time.h>

int	main(void)
{
	time_t curtime;

	time(&curtime);
	printf("%s", ctime(&curtime));
	return (0);
}
