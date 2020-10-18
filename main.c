#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    int i, id, min, count, len;

    gets(s);
    len = strlen(s);
    min = strlen(s);
    id = 0;
    count = 0;

    for (i = 0 ; i < len ; i++)
        if (s[i] != ' ') count += 1;
        else {
            if (count < min) {

            }
            count = 0;
        }

    printf("\n");
}