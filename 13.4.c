// write a program that appends one file at the end of another.

#include <stdio.h>

void append_file(const char *source_file, const char *destination_file) {
    FILE *source = fopen(source_file, "r");
    FILE *destination = fopen(destination_file, "a");

    if (!source || !destination) {
        perror("Error opening file");
        if (source) fclose(source);
        if (destination) fclose(destination);
        return;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File '%s' has been appended to '%s'.\n", source_file, destination_file);

    fclose(source);
    fclose(destination);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    append_file(argv[1], argv[2]);
    
    return 0;
}