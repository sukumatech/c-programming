#ifndef WRITERS_H_INCLUDED
#define WRITERS_H_INCLUDED

#include "data.h"

int writeString(char *str, int maxsize);
int writeInt(int *value);
int writeEntry(tripEntry *entry);

#endif