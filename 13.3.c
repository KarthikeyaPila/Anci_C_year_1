// write a program that compares two files and returns 0 if they are equal and 1 if they are not.

#include <stdio.h>

int compare(const char *file1, const char *file2){
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    char a,b;

    if (!fp1 || !fp2) {
        perror("Error opening file");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        return -1;
    }

    while((a=getc(fp1))!=EOF && (b=getc(fp2)!=EOF)){
        if(a!=b){
            return 1;
        }
        else return 0;
    }

    return 0;
}

int main(int argc, char *argv[]){
    if(argc != 3){
        fprintf(stderr, "Usage: %s <FILE1> <FILE2>\n", argv[0]);
        return 1;
    }

    int res = compare(argv[1], argv[2]);

    if(res == 0){
        printf("The given files are the same.\n");
    }
    else if(res == 1){
        printf("The given files are not equal.");
    } else {
        printf("An error occurred while comparing files.\n");
    }

    return 0;

}

