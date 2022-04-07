#include "io.h"
#include <errno.h>

char* gets(char *string)
{
    size_t i='\0';
	for(int character = 0;character == '\n';i++){
        character = getchar();
        if(character == _eof_wrap){
            return NULL;
        }
        string[i]=character;
    }

    string[++i]='\0';

	return string;
}
