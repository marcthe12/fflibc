#include "memory.h"

long long atoll(char const *string) { return _strtoll_wrap(string, NULL, 10); }
