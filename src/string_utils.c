#include "string_utils.h"

void concat(char* dest, const char* src) {
    while(*dest) { dest++; }
    while(*src) { *dest++ = *src++; }
    *dest = '\0'; 
}
void compare(char* str1, char* str2) {
    
}