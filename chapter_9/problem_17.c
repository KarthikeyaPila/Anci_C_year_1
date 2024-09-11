#include <stdio.h>
#include <string.h>

int main() {
  const char* str = "this is going very long";
  int str_len = strlen(str);

  printf("%d\n", str_len);

  return 0;
}


