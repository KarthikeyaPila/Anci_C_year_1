// Two files DATA1 AND DATA2 contain sorted lists of integers. Write a program to prouce a third file DATA which holds a 
// sigle sorted, merged list of these two lists. Use command line arguments to specify the filename.


#include <stdio.h>
#include <stdlib.h>

void merge_files(const char *file1, const char *file2, const char *outfile) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    FILE *fp_out = fopen(outfile, "w");

    if (!fp1 || !fp2 || !fp_out) {
        perror("Error opening file");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        if (fp_out) fclose(fp_out);
        return;
    }

    int num1, num2;
    int has_num1 = fscanf(fp1, "%d", &num1);  
    int has_num2 = fscanf(fp2, "%d", &num2);  

    while (has_num1 == 1 && has_num2 == 1) {
        if (num1 < num2) {
            fprintf(fp_out, "%d ", num1);
            has_num1 = fscanf(fp1, "%d", &num1);  
        } else {
            fprintf(fp_out, "%d ", num2);
            has_num2 = fscanf(fp2, "%d", &num2);  
        }
    }

    while (has_num1 == 1) {
        fprintf(fp_out, "%d ", num1);
        has_num1 = fscanf(fp1, "%d", &num1);
    }

    while (has_num2 == 1) {
        fprintf(fp_out, "%d ", num2);
        has_num2 = fscanf(fp2, "%d", &num2);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp_out);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <DATA1> <DATA2> <DATA>\n", argv[0]);
        return 1;
    }

    merge_files(argv[1], argv[2], argv[3]);

    printf("Merged file '%s' created successfully.\n", argv[3]);

    return 0;
}
