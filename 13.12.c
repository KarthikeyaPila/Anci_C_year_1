// Write a C program that uses getw function to read integer values from one file. Subsequently, it uses the putw function to write the integer 
// values in reverse order in another file.

#include <stdio.h>

int main() {
    FILE *fp1 = fopen("integer_vals.txt", "w+");
    FILE *fp2 = fopen("target_file.txt", "w");
    
    if (!fp1 || !fp2) {
        perror("Error opening file");
        return 1;
    }

    for (int i=1; i<=10; i++) {
        putw(i, fp1);
    }

    fseek(fp1, 0, SEEK_SET);

    int numbers[10], count = 0;
    while ((numbers[count]=getw(fp1)) != EOF) {
        count++;
    }

    for (int i=count-1; i>=0; i--) {
        putw(numbers[i], fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Integers written in reverse to: target_file.txt \n");
    return 0;
}