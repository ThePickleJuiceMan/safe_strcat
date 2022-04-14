#include "safe_strcat.h"

int main()
{
	char *s1 = NULL;
	char *s2 = NULL;

	printf("safe_strcat: %s\n", safe_strcat(s1, s2));

	return 0;
}
