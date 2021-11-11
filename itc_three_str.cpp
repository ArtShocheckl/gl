
#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3)
{
	string new_str = "";
    if (itc_find_str(str1, str2) == -1)
        return str1;
	long long len1 = itc_len(str1);
	long long len2 = itc_len(str2);
	while (itc_find_str(str1, str2) != -1)
	{
		long long index = itc_find_str(str1, str2);
		for (long long i = 0; i < index; i++)
			new_str += str1[i];
		new_str += str3;
		for(long long i = index; i < index +len2 ; i++){
            str1[i] = 'z';
		}
		for (long long i = index + len2; i < len1; i++){
            new_str += str1[i];

		}
	}
	return new_str;
}

