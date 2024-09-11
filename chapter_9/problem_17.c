#include <stdio.h>
#include <string.h>

int main() {
  const char* str = "this is going very long";
  int str_len = strlen(str);
  int small_len = str_len;
  int large_len = 0;
  int cur_word_len = 0;

  for(int i=0; i<str_len; i++){
    if(str[i] == ' '){
      if(cur_word_len < small_len){
        small_len = cur_word_len;
      }
      if(cur_word_len > large_len){
        large_len = cur_word_len;
      }

      cur_word_len = 0;
    } else {
      cur_word_len++;
    }
  }

  printf("small_len = %d\n", small_len);
  printf("large_len = %d\n", large_len);

  return 0;
}


