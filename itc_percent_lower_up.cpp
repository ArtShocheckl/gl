
#include "str_easy.h"

double itc_percent_lower_uppercase(string str)
{
	double upper = 0;
	double lower = 0;
	for (long long i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			upper++;
		if (str[i] >= 'a' && str[i] <= 'z')
			lower++;
	}
	if (lower == 0)
		return -1;
	return  upper/lower;
}
