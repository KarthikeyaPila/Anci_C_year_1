// Desing a function locate() that takes two character arrays s1 and s2 and one integer value m
// as parameters and inserts the string s2 into s1 immediately after the index m.'

    #include <stdio.h>
    #include <string.h>

        void locate(char s1[], char s2[], int len_s1, int len_s2, char s3[], int m){

            char temp[len_s1-m];

            int j=0;
            for(int i=m; i<len_s1; i++){
                temp[j] = s1[i];
                j++;
            }

            for(int i=0; i<m; i++){
                s3[i] = s1[i];
            }

            int l=0;
            for(int i=m; i<m+len_s2; i++){
                s3[i] = s2[l];
                l++;
            }

            s3[m+len_s2] = ' ';

            int k=0;
            for(int i=m+len_s2+1; i<len_s1+len_s2+1; i++){
                s3[i] = temp[k];
                k++;
            }

            s3[len_s1+len_s2+1] = '\0';

        }

        int main(){

        char a[] = "hello there";
        char b[] = "bye";
        int m = 10;
        int lena = strlen(a);
        int lenb = strlen(b);
        char c[lena+lenb+2];

        locate(a,b,lena,lenb,c,m);

        printf("%s", c);

        return 0;
        }




