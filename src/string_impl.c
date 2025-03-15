#include "string_impl.h"
#include "string_utils.h"

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
        str->length = len(data);
        str->capacity = str->length + 1;
        str->data = (char*)malloc(str->capacity);
        if(!str->data) {
            free(str);
            return NULL;
        }
        copy(str->data, data);
    }

    return str;
}
