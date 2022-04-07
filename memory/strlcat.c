#include "memory.h"

size_t strlcat(char *destination, char const *source, size_t max_lenght)
{
	size_t destination_lenght = strnlen(destination, max_lenght);
	if (destination_lenght == max_lenght)
		return destination_lenght + strlen(source);
	return destination_lenght + strlcpy(destination + destination_lenght,
					    source,
					    max_lenght - destination_lenght);
}
