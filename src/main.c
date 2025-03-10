#include "string_impl.h"

int main() {
    String* str = new("Hello, World!");
    printf("%s\n", str->data);
    return 0;
}
