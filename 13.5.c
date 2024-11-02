    // Write a program that reads a file containing integers and appends at its end, the sum of all the integers.

    #include <stdio.h>

    void append_file(const char *file) {
        FILE *fp = fopen(file, "r");

        if (!fp) {
            perror("Error opening file");
            if (fp) fclose(fp);
            return;
        }

        int num, sum=0;
        while ((fscanf(fp, "%d", &num))==1) {
            sum += num;
        }

        fclose(fp);

        fp = fopen(file, "a");
        fprintf(fp, "\n%d", sum);  // Append the sum at the end of the file
        fclose(fp);

    }

    int main(int argc, char* argv[]){
        if (argc != 2) {
            fprintf(stderr, "Usage: %s <num_file>\n", argv[0]);
            return 1;
        }

        append_file(argv[1]);

        return 0;
    }