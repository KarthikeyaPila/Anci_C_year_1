//Write a C program that concatenates the contents of two files and writes then in the third file.

#include <stdio.h>

void concatenate_files(const char *file1, const char *file2, const char *output_file) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    FILE *fp_out = fopen(output_file, "w");

    if (!fp1 || !fp2 || !fp_out) {
        perror("Error opening files");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        if (fp_out) fclose(fp_out);
        return;
    }
\
    char ch;
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp_out);
    }

    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp_out);
    }

    printf("Files concatenated successfully into %s\n", output_file);

    fclose(fp1);
    fclose(fp2);
    fclose(fp_out);
}

int main() {
    char file1[50], file2[50], output_file[50];

    printf("Enter the first file name: ");
    scanf("%s", file1);
    printf("Enter the second file name: ");
    scanf("%s", file2);
    printf("Enter the output file name: ");
    scanf("%s", output_file);

    concatenate_files(file1, file2, output_file);

    return 0;
}