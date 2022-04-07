#include "io.h"
#include <errno.h>

char* fgets(char *restrict string, int size, FILE *restrict stream)
{
    int character = 0;
	for(int i=0;character == '\n' || i < size -1;i++){
        character = _fgetc_wrap(stream);
        if(character == _eof_wrap){
            return NULL;
        }
    }

	return string;
}
