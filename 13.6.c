// Write a program that promts the user for two files, one containing a line of text known as source file and other, an empty file
// known as target file and then copies the contents of source file into the target file.
// Modify the program so that a specified character is deleted form the source file as it is copied to the target file.

#include <stdio.h>

void copy(const char *source_file, const char *target_file, char rem_char){
    FILE *fp1 , *fp2;
    fp1 = fopen(source_file, "r");
    fp2 = fopen(target_file, "w");

    if(!fp1 || !fp2){
        perror("Error opening files");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        return;
    }

    char c;

    while((c=getc(fp1))!=EOF){
        if(c!=rem_char){
            putc(c, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);
}

int main(int argc, char argv[]){
    if(argc != 3){
        fprintf(stderr, "usage: <source file> <target file>\n", argv[0]);
        return 1;
    }

    char rem_char;
    printf("what character do you want to remove?\n");
    scanf(" %c", &rem_char);
    copy(argv[1], argv[2], rem_char);
    printf("File copied with specified character removed.\n");
    return 0;

}
