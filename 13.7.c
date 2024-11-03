// Write a program that requests for a file name and an integer, known as offset value. The program then reads the 
// file starting from the location specified by the offset value and prints the contents on the screen.
// NOTE: If the offset value is a positive integer, then printing skips that many lines. If it is a negative number, it prints that many
// lines from the end of the file. An appropriate error message should be printed, if anything goes wrong.

#include <stdio.h>
#include <stdlib.h>

void read_from_offset(const char *file, int offset) {
    FILE *fp = fopen(file, "r");
    if (!fp) {
        perror("Error opening file");
        return;
    }

    int line_count = 0;
    char buffer[200];

    while (fgets(buffer, sizeof(buffer), fp)) {
        line_count++;
    }

    if (abs(offset) > line_count) {
        printf("Error: Offset exceeds the number of lines in the file.\n");
        fclose(fp);
        return;
    }

    rewind(fp);

    int start_line = (offset >= 0) ? offset : line_count + offset;

    int current_line = 0;
    while (current_line < start_line && fgets(buffer, sizeof(buffer), fp)) {
        current_line++;
    }

    printf("Printing from offset line %d:\n", start_line);
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }

    fclose(fp);
}

int main() {
    char filename[100];
    int offset;

    printf("Enter the filename: ");
    scanf("%s", filename);

    printf("Enter the offset value: ");
    scanf("%d", &offset);

    read_from_offset(filename, offset);

    return 0;
}