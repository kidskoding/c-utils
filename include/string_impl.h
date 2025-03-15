#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* data;
    size_t length;
    size_t capacity;
} String;

String* new(const char* data);

#endif
