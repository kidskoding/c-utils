#include "string_utils.h"
#include "string_impl.h"

size_t len(char* str) {
    size_t len = 0;
    while(*str++) {
        len++;
    }
    return len;
}

String* copy(char* dest, const char* str) {
    size_t len = len(str);
    for(size_t i = 0; i < len; i++) {
        dest[i] = str[i];
    }
    dest[len] = '\0';
    return new(dest);
}
