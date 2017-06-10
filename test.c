#include <stdio.h>
#include <string.h>

int my_strlen(const char *s);

int main() {
  printf("%d \n", my_strlen("hello"));
  return 0;
}

int my_strlen(const char *s) {
    int result = 0;
    while (*(s + result) != '\0') {
        result ++;
    }
    return result;
}
