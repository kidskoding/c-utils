#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* data;
    size_t length;
    size_t capacity;
} String;

String* new(const char* data) {
    String* str = (String*)malloc(sizeof(String));
    if(!str) {
        return NULL;
    }

    if(!data) {
        str->length = 0;
        str->capacity = 8;
        str->data = (char*)malloc(str->capacity);
        if(!str->data) {
            free(str);
            return NULL;
        }
    } else {
        str->length = strlen(data);
        str->capacity = str->length + 1;
        str->data = (char*)malloc(str->capacity);
        if(!str->data) {
            free(str);
            return NULL;
        }
        strcpy(str->data, data);
    }

    return str;
}

#endif
