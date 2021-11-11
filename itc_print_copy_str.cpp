
#include "str_easy.h"

void itc_print_copy_str(string str, int number)
{
    if( number < 0 )
        return -1;
	for (int i = 0; i < number; i++)
		cout << str << endl;
}
