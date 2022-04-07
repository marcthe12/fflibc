#include "memory.h"

size_t wcslcat(wchar_t *destination, wchar_t const *source, size_t max_lenght)
{
	size_t destination_lenght = wcsnlen(destination, max_lenght);
	if (destination_lenght == max_lenght)
		return destination_lenght + wcslen(source);
	return destination_lenght + wcslcpy(destination + destination_lenght,
					    source,
					    max_lenght - destination_lenght);
}
