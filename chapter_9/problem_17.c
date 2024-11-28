#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);

  int str_len = strlen(str);
  int small_len = str_len;
  int large_len = 0;
  int cur_word_len = 0;
  int pos_small_word = 0;
  int pos_large_word = 0;

  for(int i=0; i<str_len; i++){
    if(str[i] == ' ' || str[i] == '\n'){
      if(cur_word_len < small_len){
        small_len = cur_word_len;
        pos_small_word = i-small_len;
      }
      if(cur_word_len > large_len){
        large_len = cur_word_len;
        pos_large_word = i-large_len;
      }

      cur_word_len = 0;
    } else {
      cur_word_len++;
    }
  }

  printf("pos_small_word: %d, small_len: %d\n", pos_small_word, small_len);
  printf("pos_large_word: %d, large_len: %d\n", pos_large_word, large_len);

  // print small word
  printf("\nsmall word: ");
  for(int i=0; i<small_len; i++){
    printf("%c", str[pos_small_word + i]);
  }

  // print large word
  printf("\nlarge word: ");
  for(int i=0; i<large_len; i++){
    printf("%c", str[pos_large_word + i]);
  }

  return 0;
}


