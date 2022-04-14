#include "safe_strcat.h"

char * safe_strcat(const char *s1, const char *s2)
{
	if(s1 == NULL && s2 == NULL) return "";

	if(s1 == NULL)
	{
		size_t s2_size = strlen(s2);
		char * retval = (char *) malloc(s2_size);
		snprintf(retval, s2_size + 1, "%s", s2);
		return retval;
		
	}
	if(s2 == NULL)
	{
		size_t s1_size = strlen(s1);
		char * retval = (char *) malloc(s1_size);
		snprintf(retval, s1_size + 1, "%s", s1);
		return retval;
	}

	size_t buf_size = strlen(s1) + strlen(s2) + 1; //+1 for \0
	char * concat = (char *)malloc(buf_size);

	if(snprintf(concat, buf_size, "%s%s", s1,s2) >= buf_size)
	{
		fprintf(stderr, "safe_strcat truncated s1 + s2\n");
	}

	return concat;
}
