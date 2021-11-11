

#include "str_easy.h"

void itc_print_copy_str(string str, int number)
{
    int i = 0;
    int g = -1;
    if( number < 0 )
        cout<< g;
    if(number >= 0){
        while( i < number){
            cout << str;
            i++;
        }
    }
}
